# CesiumProject
Cesium Project for summer internship 2023 by Abhinav Srivastava

SOFTWARE USED: Unreal Engine 5.0.3, JetBrains Rider for C++

Problem Statement: Spawn static meshes in Unreal Engine using a random property generation script

Complications: Total count of static meshes to be spawned can be extremely large

Solution:

Brute force solution: Use GetWorld()->SpawnActor() to spawn Static Mesh Actors.
1. Problem with this solution is that it is highly inefficient, and at large tree counts, it will cause the editor to crash

Brute force solution with cull distance volume: use GetWorld()->SpawnActor() to spawn Static Mesh Actors then use a Cull Distance Volume to cull Meshes of different sizes.
1. This solution is actually pretty good and decently efficient, but it is still lacking when counts exceed > 100,000

CORRECT SOLUTION:

We know that we are spawning trees of different sizes but same Mesh. So Instead of actually spawning 100,000 Meshes, we will use a component called Instanced Static Mesh Component.

Specifically we will use Hierarchical Instanced Static Mesh Component, this particular subtype allows us to utilise LODs on the Mesh for extra performance.

An Instanced Static Mesh Component basically allows us to spawn a large number of the same Meshes at different Transforms with VERY GOOD PERFORMANCE.

After tweaking some properties like start and end cull distance on our mesh component, and setting up LODs on the Mesh itself, we can very easily spawn >100,000 Meshes with minimal to no performance drop.

HOW TO USE PROJECT:

Clone repository and compile the source code for project.

The project opens to Main_Map. Here apart from default lighting setup, there's one actor in the scene: ATreeSpawner.

Click and edit properties like what Mesh the Hierarchical Instanced Mesh Component uses, and how many trees to spawn by editing Tree Count field in editor.

Click play to see trees to spawn, the project uses the default flying pawn as the default pawn class, so feel free to add/change movement speed and other properties.

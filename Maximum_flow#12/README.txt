Initialize the residual graph as a copy of the original graph.
Initialize the max flow as 0.
While there is a path from the source (s) to the sink (t) in the residual graph:
a. Find the minimum residual capacity of the edges along this path. This minimum capacity is the maximum flow that can be sent along this path.
b. Update the residual capacities of the edges along this path. For each edge (u, v) in the path:
Decrease the residual capacity of edge (u, v) by the minimum residual capacity found in step 3a.
Increase the residual capacity of edge (v, u) by the minimum residual capacity found in step 3a.
c. Add the minimum residual capacity found in step 3a to the max flow.
Return the max flow as the maximum flow from the source to the sink in the original graph.
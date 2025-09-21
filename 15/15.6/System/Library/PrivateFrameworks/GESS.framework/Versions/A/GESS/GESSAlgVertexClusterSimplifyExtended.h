@class NSMutableData, GESSAlgVertexClusterSimplifyOptions;

@interface GESSAlgVertexClusterSimplifyExtended : GESSAlgBase {
    GESSAlgVertexClusterSimplifyOptions *_options;
    NSMutableData *_clusterCenterPositions;
    NSMutableData *_clusterCenterColors;
    NSMutableData *_clusterCenterNormals;
}

- (void).cxx_destruct;
- (void)setOptions:(id)a0;
- (char)run:(id)a0;
- (id)returnClusterCenterColors;
- (id)returnClusterCenterNormals;
- (id)returnClusterCenterPositions;

@end

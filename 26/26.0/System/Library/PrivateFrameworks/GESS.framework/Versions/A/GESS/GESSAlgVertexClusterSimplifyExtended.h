@class NSMutableData, GESSAlgVertexClusterSimplifyOptions;

@interface GESSAlgVertexClusterSimplifyExtended : GESSAlgBase {
    GESSAlgVertexClusterSimplifyOptions *_options;
    NSMutableData *_clusterCenterPositions;
    NSMutableData *_clusterCenterColors;
    NSMutableData *_clusterCenterNormals;
}

- (void)setOptions:(id)a0;
- (BOOL)run:(id)a0;
- (void).cxx_destruct;
- (id)returnClusterCenterColors;
- (id)returnClusterCenterNormals;
- (id)returnClusterCenterPositions;

@end

@class NSMutableData;

@interface GESSAlgRepairTopologyExtended : GESSAlgBase {
    NSMutableData *_vertexReorderedMappingData;
}

- (void).cxx_destruct;
- (char)run:(id)a0;
- (id)returnVertexReordered;

@end

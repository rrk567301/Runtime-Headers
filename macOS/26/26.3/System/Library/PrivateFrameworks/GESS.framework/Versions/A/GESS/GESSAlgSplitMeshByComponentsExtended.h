@class GESSAlgSplitMeshByComponentsOptions;

@interface GESSAlgSplitMeshByComponentsExtended : GESSAlgBase {
    GESSAlgSplitMeshByComponentsOptions *_options;
}

- (void).cxx_destruct;
- (void)setOptions:(id)a0;
- (BOOL)run:(id)a0 output:(id)a1;

@end

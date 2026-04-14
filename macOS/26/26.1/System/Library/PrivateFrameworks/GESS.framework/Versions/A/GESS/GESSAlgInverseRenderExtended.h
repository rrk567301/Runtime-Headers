@class GESSAlgInverseRenderOptions;

@interface GESSAlgInverseRenderExtended : GESSAlgBase {
    GESSAlgInverseRenderOptions *options_;
    BOOL success_;
    double parameterizeTime_;
    double dataConvertTime_;
    double totalTime_;
    struct InverseRenderReport { double time_texture_optimization_preparation; double time_texture_optimization; double time_build_material_maps; } report_;
}

- (void)setOptions:(id)a0;
- (void).cxx_destruct;
- (id)returnReport;
- (BOOL)run:(id)a0 mvps:(id)a1 imageSets:(id)a2 outputMesh:(id)a3;

@end

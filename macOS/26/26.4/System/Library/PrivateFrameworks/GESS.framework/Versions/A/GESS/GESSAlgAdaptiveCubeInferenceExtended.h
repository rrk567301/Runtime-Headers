@class GESSAlgAdaptiveCubeInferenceOptions;

@interface GESSAlgAdaptiveCubeInferenceExtended : GESSAlgBase {
    GESSAlgAdaptiveCubeInferenceOptions *options_;
    struct AdaptiveCubeFWDReport { double time_data_convert; double time_construct_vertices_faces; } report_;
    double totalTime_;
    double constructMeshTime_;
}

- (void)setOptions:(id)a0;
- (void).cxx_destruct;
- (id)returnReport;
- (BOOL)run:(id)a0 deform:(id)a1 weight:(id)a2 outputMesh:(id)a3;

@end

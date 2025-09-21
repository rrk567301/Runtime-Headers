@class GESSAlgAdaptiveQuadModelConvertOptions;

@interface GESSAlgAdaptiveQuadModelConvertExtended : GESSAlgBase {
    GESSAlgAdaptiveQuadModelConvertOptions *_options;
    struct AdaptiveTriModel2QuadModelReport { struct error_code { int __val_; struct error_category *__cat_; } error_code; double time_pre_processing; double time_tangential_field; double time_deformation; double time_quadrangulation; double time_discretization; double time_quad_components_merging; double time_total; unsigned int count_output_components; unsigned int count_singularity; unsigned int count_integer_variables; unsigned int count_total_variables; float quality_metric_solver_mae; float quality_metric_angle_mean; float quality_metric_angle_STD; double time_baking; } _report;
    id /* block */ _progress_cb;
    id /* block */ _error_cb;
}

- (void)setOptions:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)setErrorCallback:(id /* block */)a0;
- (id)returnReport;
- (BOOL)run:(id)a0 output:(id)a1;
- (BOOL)setProgressCallback:(id /* block */)a0;

@end

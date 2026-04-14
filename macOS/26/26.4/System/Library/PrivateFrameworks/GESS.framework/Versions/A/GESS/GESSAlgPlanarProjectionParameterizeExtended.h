@class GESSAlgPlanarProjectionParameterizeOptions;

@interface GESSAlgPlanarProjectionParameterizeExtended : GESSAlgBase {
    GESSAlgPlanarProjectionParameterizeOptions *_options;
    struct ParameterizeReport { struct error_code { int __val_; struct error_category *__cat_; } error_code; double chart_time; double initial_param_time; double split_param_time; double chart_merge_time; double fix_self_intersect_time; unsigned long long chart_number; double pack_time; unsigned long long pack_img_number; float max_stretch_ratio; float avg_stretch_ratio; float self_intersect_ratio; } _report;
}

- (BOOL)run:(id)a0;
- (void)setOptions:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)returnReport;

@end

@class GESSAlgSDSmoothOptions;

@interface GESSAlgSDSmoothExtended : GESSAlgBase {
    GESSAlgSDSmoothOptions *_options;
    struct SDSmoothingReport { struct error_code { int __val_; struct error_category *__cat_; } error_code; double time_total; double time_smooth_normal; double time_prepare_matrix; double time_solve_linear_system; unsigned int num_of_non_zeros; } _report;
    id /* block */ _progress_cb;
    id /* block */ _error_cb;
    BOOL _success;
}

- (BOOL)run:(id)a0;
- (void)setOptions:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)setErrorCallback:(id /* block */)a0;
- (id)returnReport;
- (BOOL)setProgressCallback:(id /* block */)a0;

@end

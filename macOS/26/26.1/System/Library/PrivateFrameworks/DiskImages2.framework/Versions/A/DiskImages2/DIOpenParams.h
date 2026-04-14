@interface DIOpenParams : DIBaseParams {
    struct unique_ptr<diskimage_uio::diskimage_open_params, std::default_delete<diskimage_uio::diskimage_open_params>> { struct diskimage_open_params *__ptr_; } _openParams;
}

@property (readonly, nonatomic) int UIOOpenMode;

- (id)openWithError:(id *)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 openMode:(long long)a1 error:(id *)a2;
- (struct expected<void, std::error_code> { union constexpr_storage<void, std::error_code> { char x0; struct error_code { int x0; struct error_category *x1; } x1; } x0; BOOL x1; })unlockImageWithOpenParams:(struct diskimage_open_params { struct diskimage_open_params_impl *x0; } *)a0;

@end

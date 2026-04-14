@interface FI_TTagTextLabel : FI_TTextField {
    struct unique_function<void ()> { struct unique_ptr<fstd::callable_details::callable_holder_base<void>, std::default_delete<fstd::callable_details::callable_holder_base<void>>> { struct { void *__ptr_; } ; } fCallableHolder; } _folderCustomizationAction;
}

@property (nonatomic) BOOL showFolderCustomization;

- (void)initCommon;
- (id)accessibilityRole;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)accessibilityValue;
- (id)accessibilityTitle;
- (void)performAction;
- (BOOL)accessibilityPerformPress;
- (void)configureForFolderCustomization:(void *)a0;

@end

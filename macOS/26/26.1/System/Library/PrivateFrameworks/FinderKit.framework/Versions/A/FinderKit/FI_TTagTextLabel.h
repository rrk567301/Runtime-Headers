@interface FI_TTagTextLabel : FI_TTextField {
    struct unique_function<void ()> { struct unique_ptr<fstd::callable_details::callable_holder_base<void>, std::default_delete<fstd::callable_details::callable_holder_base<void>>> { void *__ptr_; } fCallableHolder; } _folderCustomizationAction;
}

@property (nonatomic) BOOL showFolderCustomization;

- (id)accessibilityTitle;
- (id)accessibilityValue;
- (void)initCommon;
- (id).cxx_construct;
- (void)performAction;
- (id)accessibilityRole;
- (void).cxx_destruct;
- (BOOL)accessibilityPerformPress;
- (void)configureForFolderCustomization:(void *)a0;

@end

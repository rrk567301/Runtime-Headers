@class NSView, NSImageView, FI_TTextField;

@interface FI_TFakeTagsMenuItemView : FI_TUpdateLayerView {
    NSView *_selectionView;
    FI_TTextField *_titleField;
    FI_TTextField *_addOrRemoveField;
    BOOL _useFolderCustomization;
    struct unique_function<void ()> { struct unique_ptr<fstd::callable_details::callable_holder_base<void>, std::default_delete<fstd::callable_details::callable_holder_base<void>>> { void *__ptr_; } fCallableHolder; } _folderCustomizationAction;
}

@property (nonatomic) BOOL selected;
@property (nonatomic) struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } addOrRemoveLabelText;
@property (weak, nonatomic) NSImageView *symbolView;

+ (id)fakeMenuItemViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

- (void)mouseDown:(id)a0;
- (void)mouseUp:(id)a0;
- (void)layout;
- (id).cxx_construct;
- (void)initCommon;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void).cxx_destruct;
- (void)configureForFolderCustomization:(void *)a0;
- (void)configureForTagging;
- (id)newTextFieldSubview;

@end

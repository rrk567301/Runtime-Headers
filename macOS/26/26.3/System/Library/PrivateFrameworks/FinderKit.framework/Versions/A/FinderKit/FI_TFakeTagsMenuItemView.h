@class NSImageView, NSView, FI_TTextField, FI_TTagTextLabel;

@interface FI_TFakeTagsMenuItemView : FI_TUpdateLayerView {
    NSView *_selectionView;
    FI_TTagTextLabel *_titleField;
    FI_TTextField *_addOrRemoveField;
    BOOL _useFolderCustomization;
}

@property (nonatomic) BOOL selected;
@property (nonatomic) struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } addOrRemoveLabelText;
@property (weak, nonatomic) NSImageView *symbolView;

+ (id)fakeMenuItemViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

- (void)mouseUp:(id)a0;
- (void)initCommon;
- (void)mouseExited:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)layout;
- (void).cxx_destruct;
- (void)mouseDown:(id)a0;
- (id).cxx_construct;
- (void)configureForFolderCustomization:(void *)a0;
- (void)configureForTagging;
- (id)newTextFieldSubview;

@end

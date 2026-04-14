@class NSBox, QFilterOutlineView, NSScrollView, NSMenu, NSButton, NSMenuItem;

@interface QFilterView : NSView {
    NSButton *FilterAddButton;
    NSButton *FilterApplyButton;
    NSBox *FilterControlBox;
    NSButton *FilterHelpButton;
    QFilterOutlineView *FilterOutlineView;
    NSButton *FilterRemoveButton;
    NSScrollView *FilterScrollOutlineView;
    NSMenu *FilterActionMenu;
    NSMenuItem *LockUnlockMenuItem;
    NSMenuItem *ColorSubmenu;
    NSMenuItem *AssignProfileMenuItem;
    NSMenuItem *DefaultProfileMenuItem;
    NSMenuItem *RenderIntentMenuItem;
    NSMenuItem *IntermediateTransformMenuItem;
    NSMenuItem *ConvertToProfileMenuItem;
    NSMenuItem *ImageSubmenu;
    NSMenuItem *ColorImageSamplingMenuItem;
    NSMenuItem *GrayImageSamplingMenuItem;
    NSMenuItem *ImageCompressionMenuItem;
    NSMenuItem *ImageConvolutionMenuItem;
    NSMenuItem *PDFSubmenu;
    NSMenuItem *PDFPoliciesMenuItem;
    NSMenuItem *PDFX3MenuItem;
    NSMenuItem *DomainItem;
    NSMenuItem *CommentItem;
}

+ (void)newWithOwner:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)sizeToFit;
- (void)awakeFromNib;
- (void)initWithApplyButton:(BOOL)a0;
- (id)outlineview;
- (id)FilterApplyButton;
- (id)FilterHelpButton;
- (id)FilterRemoveButton;
- (id)FilterActionMenu;
- (id)LockUnlockMenuItem;
- (id)ColorSubmenu;
- (id)AssignProfileMenuItem;
- (id)DefaultProfileMenuItem;
- (id)RenderIntentMenuItem;
- (id)IntermediateTransformMenuItem;
- (id)ConvertToProfileMenuItem;
- (id)ImageSubmenu;
- (id)ColorImageSamplingMenuItem;
- (id)GrayImageSamplingMenuItem;
- (id)ImageCompressionMenuItem;
- (id)ImageConvolutionMenuItem;
- (id)PDFSubmenu;
- (id)PDFPoliciesMenuItem;
- (id)PDFX3MenuItem;
- (id)DomainItem;
- (id)CommentItem;

@end

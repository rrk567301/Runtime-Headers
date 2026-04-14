@class PagePreviewViewController, NSString;

@interface PagePreviewContainerView : NSView <NSAccessibilityGroup>

@property (weak, nonatomic) PagePreviewViewController *previewViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)accessibilityLabel;
- (void).cxx_destruct;
- (void)cancelOperation:(id)a0;
- (BOOL)acceptsFirstResponder;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityRoleDescription;

@end

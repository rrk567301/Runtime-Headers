@class CALayer, NSDocumentRevisionsView, CABackdropLayer;

@interface NSDocumentRevisionsWindow : NSWindow {
    NSDocumentRevisionsView *view;
    CALayer *dpLayer;
    CABackdropLayer *rootBackdropLayer;
}

@property (readonly) NSDocumentRevisionsView *view;
@property (readonly) CALayer *dpLayer;

- (void)sendEvent:(id)a0;
- (id)initWithController:(id)a0;
- (BOOL)canBecomeKeyWindow;
- (void).cxx_destruct;
- (BOOL)_allowsOrdering;
- (id)accessibilityActionNames;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilitySubroleAttribute;
- (id)accessibilityTitleAttribute;
- (BOOL)canBecomeMainWindow;

@end

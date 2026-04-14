@class CALayer, NSDocumentRevisionsView, CABackdropLayer;

@interface NSDocumentRevisionsWindow : NSWindow {
    NSDocumentRevisionsView *view;
    CALayer *dpLayer;
    CABackdropLayer *rootBackdropLayer;
}

@property (readonly) NSDocumentRevisionsView *view;
@property (readonly) CALayer *dpLayer;

- (id)accessibilitySubroleAttribute;
- (id)accessibilityActionNames;
- (void)accessibilityPerformAction:(id)a0;
- (BOOL)canBecomeKeyWindow;
- (BOOL)canBecomeMainWindow;
- (id)accessibilityTitleAttribute;
- (id)initWithController:(id)a0;
- (void)sendEvent:(id)a0;
- (BOOL)_allowsOrdering;

@end

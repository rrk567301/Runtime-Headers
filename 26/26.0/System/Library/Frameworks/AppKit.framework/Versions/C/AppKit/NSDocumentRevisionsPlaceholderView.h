@class NSString, NSProgressIndicator, NSTextField;

@interface NSDocumentRevisionsPlaceholderView : NSView {
    NSTextField *messageField1;
    NSTextField *messageField2;
    NSProgressIndicator *progressIndicator;
    BOOL progressIndicatorVisible;
    BOOL animating;
    BOOL hideElements;
    BOOL preventLayout;
}

@property BOOL progressIndicatorVisible;
@property BOOL progressIndicatorAnimating;
@property (copy) NSString *message1;
@property (copy) NSString *message2;

- (void)_layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (BOOL)_hasButtonOrProgress;
- (id)makeMessageTextField:(BOOL)a0;
- (void)setElementsHidden:(BOOL)a0;

@end

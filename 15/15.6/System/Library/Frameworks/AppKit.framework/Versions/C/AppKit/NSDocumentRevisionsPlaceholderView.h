@class NSString, NSProgressIndicator, NSTextField;

@interface NSDocumentRevisionsPlaceholderView : NSView {
    NSTextField *messageField1;
    NSTextField *messageField2;
    NSProgressIndicator *progressIndicator;
    char progressIndicatorVisible;
    char animating;
    char hideElements;
    char preventLayout;
}

@property char progressIndicatorVisible;
@property char progressIndicatorAnimating;
@property (copy) NSString *message1;
@property (copy) NSString *message2;

- (void).cxx_destruct;
- (void)_layout;
- (char)_hasButtonOrProgress;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)makeMessageTextField:(char)a0;
- (void)setElementsHidden:(char)a0;

@end

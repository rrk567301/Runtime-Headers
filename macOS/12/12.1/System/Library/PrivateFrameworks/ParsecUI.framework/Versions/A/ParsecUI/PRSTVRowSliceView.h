@class NSImageView, NSString, NSTextField, NSURL, NSLayoutConstraint, NSFont, NSColor;

@interface PRSTVRowSliceView : NSView

@property (retain, nonatomic) NSString *leadingString;
@property (retain, nonatomic) NSFont *leadingFont;
@property (retain, nonatomic) NSColor *leadingTextColor;
@property (retain, nonatomic) NSString *trailingString;
@property (retain, nonatomic) NSFont *trailingFont;
@property (retain, nonatomic) NSColor *trailingTextColor;
@property (weak) NSImageView *tvImage;
@property (weak) NSTextField *leadingTextField;
@property (weak) NSTextField *trailingTextField;
@property (weak) NSLayoutConstraint *imageAspectRatioConstraint;
@property (retain) NSURL *tvURL;
@property (nonatomic) BOOL clickable;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (void)updateTrackingAreas;
- (void)cursorUpdate:(id)a0;

@end

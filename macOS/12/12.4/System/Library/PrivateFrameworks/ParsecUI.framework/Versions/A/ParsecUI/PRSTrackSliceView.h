@class NSButton, NSString, NSTextField, NSTrackingArea, NSLayoutConstraint, NSFont, NSColor;

@interface PRSTrackSliceView : NSView {
    NSTrackingArea *_trackingArea;
}

@property (retain, nonatomic) NSString *numberString;
@property (retain, nonatomic) NSString *leadingString;
@property (retain, nonatomic) NSFont *leadingFont;
@property (retain, nonatomic) NSColor *leadingTextColor;
@property (retain, nonatomic) NSString *trailingString;
@property (retain, nonatomic) NSFont *trailingFont;
@property (retain, nonatomic) NSColor *trailingTextColor;
@property (nonatomic) double additionalHeight;
@property (nonatomic) BOOL clickable;
@property (nonatomic) BOOL playing;
@property (weak) NSButton *playButton;
@property (weak) NSTextField *numberTextField;
@property (weak) NSTextField *leadingTextField;
@property (weak) NSTextField *trailingTextField;
@property (weak) NSLayoutConstraint *additionalHeightConstraint;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)updateTrackingAreas;
- (void)cursorUpdate:(id)a0;
- (BOOL)mouseInView;
- (void)_removeTrackingAreas;
- (void)toggleShowPlay;

@end

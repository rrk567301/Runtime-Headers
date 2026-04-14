@class NSFont, NSString, NSURL, PRSLinkButton, PRSImageView, NSColor, NSImage, PRSAppearanceTextField;

@interface PRSRowSliceView : NSView

@property (retain, nonatomic) NSString *leadingString;
@property (retain, nonatomic) NSFont *leadingFont;
@property (retain, nonatomic) NSColor *leadingTextColor;
@property (nonatomic) BOOL leadingNoWrap;
@property (retain, nonatomic) NSString *trailingString;
@property (retain, nonatomic) NSFont *trailingFont;
@property (retain, nonatomic) NSColor *trailingTextColor;
@property (nonatomic) BOOL trailingNoWrap;
@property (retain, nonatomic) NSImage *trailingImage;
@property (retain, nonatomic) NSImage *attributionImage;
@property (retain, nonatomic) NSURL *attributionURL;
@property (nonatomic) BOOL clickable;
@property PRSAppearanceTextField *leadingTextField;
@property PRSAppearanceTextField *trailingTextField;
@property PRSImageView *trailingImageView;
@property PRSLinkButton *attributionButton;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityPerformPress;
- (void)updateTrackingAreas;
- (void)cursorUpdate:(id)a0;
- (BOOL)_getNoWrapForTextField:(id)a0;
- (void)_setNoWrap:(BOOL)a0 forTextField:(id)a1;

@end

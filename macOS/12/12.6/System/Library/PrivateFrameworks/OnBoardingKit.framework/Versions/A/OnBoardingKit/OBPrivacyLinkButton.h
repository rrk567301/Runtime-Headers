@class NSString, NSColor;

@interface OBPrivacyLinkButton : NSButton

@property (copy) NSString *captionText;
@property (copy) NSString *buttonText;
@property BOOL usesLargeIcon;
@property (retain, nonatomic) NSColor *textTintColor;

- (void).cxx_destruct;
- (void)setAttributedTitle:(id)a0;
- (void)setTitle:(id)a0;
- (void)resetCursorRects;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)drawFocusRingMask;
- (id)initWithTitle:(id)a0 caption:(id)a1 image:(id)a2 imageSize:(struct CGSize { double x0; double x1; })a3 useLargeIcon:(BOOL)a4;
- (id)imageFromImage:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1 padding:(double)a2;
- (id)attributedStringForCaptionAndTitle;
- (double)preferredWidthForTextField:(id)a0;

@end

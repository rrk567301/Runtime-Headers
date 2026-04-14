@class NSString, NSColor;

@interface OBPrivacyLinkButton : NSButton

@property (copy) NSString *captionText;
@property (copy) NSString *buttonText;
@property BOOL usesLargeIcon;
@property (retain, nonatomic) NSColor *textTintColor;

- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (void)setAttributedTitle:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)resetCursorRects;
- (void)drawFocusRingMask;
- (id)initWithTitle:(id)a0 caption:(id)a1 image:(id)a2 imageSize:(struct CGSize { double x0; double x1; })a3 useLargeIcon:(BOOL)a4;
- (id)attributedStringForCaptionAndTitle;
- (id)imageFromImage:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1 padding:(double)a2;

@end

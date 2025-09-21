@class NSString, NSImage, NSColor;

@interface OBPrivacyLinkButton : NSButton

@property (copy) NSString *captionText;
@property (copy) NSString *buttonText;
@property (retain) NSImage *captionAttachmentImage;
@property char usesLargeIcon;
@property (retain, nonatomic) NSColor *textTintColor;

- (void).cxx_destruct;
- (void)setAttributedTitle:(id)a0;
- (void)setTitle:(id)a0;
- (void)drawFocusRingMask;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)resetCursorRects;
- (id)attributedStringForCaptionAndTitle;
- (id)imageFromImage:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1 padding:(double)a2;
- (id)initWithTitle:(id)a0 caption:(id)a1 captionAttachmentImage:(id)a2 image:(id)a3 imageSize:(struct CGSize { double x0; double x1; })a4 useLargeIcon:(char)a5;

@end

@class NSImageView, NSString, NSImage, NSTextField, NSColor;

@interface OBPrivacyLinkButton : NSButton

@property (copy) NSString *captionText;
@property (copy) NSString *buttonText;
@property (retain) NSImage *captionAttachmentImage;
@property BOOL usesLargeIcon;
@property (readonly) long long textAlignment;
@property NSImage *iconImage;
@property NSImageView *iconImageView;
@property NSTextField *captionTextField;
@property (retain, nonatomic) NSColor *textTintColor;
@property (retain, nonatomic) NSColor *iconTintColor;
@property (nonatomic) BOOL displayInfoIcon;

- (void)setAttributedTitle:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setTitle:(id)a0;
- (void).cxx_destruct;
- (void)drawFocusRingMask;
- (void)resetCursorRects;
- (void)addIconSubview:(id)a0;
- (id)paddedIconImage;
- (id)attributedStringForCaptionAndTitle;
- (id)attributedStringForTitle:(id)a0;
- (id)attributedStringForTitleWithInfoIcon:(id)a0;
- (id)imageFromImage:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1 padding:(double)a2;
- (id)initWithTitle:(id)a0 caption:(id)a1 captionAttachmentImage:(id)a2 image:(id)a3 imageSize:(struct CGSize { double x0; double x1; })a4 useLargeIcon:(BOOL)a5;
- (id)initWithTitle:(id)a0 caption:(id)a1 captionAttachmentImage:(id)a2 image:(id)a3 imageSize:(struct CGSize { double x0; double x1; })a4 useLargeIcon:(BOOL)a5 textAlignment:(long long)a6;
- (id)textFieldForAttributedString:(id)a0;

@end

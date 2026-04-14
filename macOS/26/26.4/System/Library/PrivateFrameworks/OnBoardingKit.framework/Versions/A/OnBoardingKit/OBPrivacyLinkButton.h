@class NSImageView, NSString, NSImage, NSTextField, NSColor;

@interface OBPrivacyLinkButton : NSButton

@property (copy) NSString *captionText;
@property (copy) NSString *buttonText;
@property (retain) NSImage *captionAttachmentImage;
@property BOOL usesLargeIcon;
@property (readonly) long long textAlignment;
@property NSString *iconSymbolName;
@property NSImageView *iconImageView;
@property NSTextField *captionTextField;
@property (retain, nonatomic) NSColor *textTintColor;
@property (retain, nonatomic) NSColor *iconTintColor;
@property (nonatomic) BOOL displayInfoIcon;

- (void)setTitle:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setAttributedTitle:(id)a0;
- (void)drawFocusRingMask;
- (void)resetCursorRects;
- (void)addIconSubview:(id)a0;
- (id)symbolIconImage;
- (double)_symbolIconHeight;
- (id)attributedStringForCaptionAndTitle;
- (id)attributedStringForTitle:(id)a0;
- (id)attributedStringForTitleWithInfoIcon:(id)a0;
- (id)initWithTitle:(id)a0 caption:(id)a1 captionAttachmentImage:(id)a2 symbolName:(id)a3 useLargeIcon:(BOOL)a4 textAlignment:(long long)a5;
- (id)textFieldForAttributedString:(id)a0;

@end

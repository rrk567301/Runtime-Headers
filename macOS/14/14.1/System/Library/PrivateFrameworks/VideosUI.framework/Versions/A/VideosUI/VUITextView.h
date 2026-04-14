@class NSString, NSAttributedString;

@interface VUITextView : NSTextView

@property (nonatomic) struct CGPoint { double x; double y; } deltaOrigin;
@property (retain, nonatomic) NSAttributedString *vuiAttributedText;
@property (retain, nonatomic) NSString *vuiText;
@property (nonatomic) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } vuiTextContainerInset;
@property (nonatomic) long long vuiTextAlignment;

- (id)_defaultParagraphStyle;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })textContainerOrigin;
- (BOOL)wantsLayer;
- (void)setVuiBackgroundColor:(id)a0;
- (struct CGSize { double x0; double x1; })vui_sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end

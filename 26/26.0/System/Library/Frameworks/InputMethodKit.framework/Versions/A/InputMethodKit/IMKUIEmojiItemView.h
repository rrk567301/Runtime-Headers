@class NSImageView, IMKUIEmojiLightweightCandidateWindowController;

@interface IMKUIEmojiItemView : NSView

@property (nonatomic) long long alignment;
@property (retain, nonatomic) NSImageView *emojiImageView;
@property (weak, nonatomic) IMKUIEmojiLightweightCandidateWindowController *windowController;

- (void)mouseUp:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateImage;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 alignment:(long long)a1;

@end

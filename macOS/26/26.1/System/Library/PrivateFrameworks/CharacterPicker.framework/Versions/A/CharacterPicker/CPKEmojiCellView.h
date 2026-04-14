@class EMFEmojiToken, CPKEmojiGraphics, NSTextField;

@interface CPKEmojiCellView : CPKDraggableView

@property (retain, nonatomic) NSTextField *emojiField;
@property (retain, nonatomic) CPKEmojiGraphics *emojiGraphics;
@property (retain, nonatomic) EMFEmojiToken *emojiToken;

- (id)accessibilityLabel;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })draggingFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageFrame;
- (void)_setUpTextField;
- (BOOL)displayAsPlainText;
- (id)initWithEmojiToken:(id)a0 emojiGraphics:(id)a1;
- (id)pasteboardItemFont;
- (id)pasteboardItemString;

@end

@class NSString, CPKEmojiPreviewView;

@interface CPKEmojiIMPreviewWindow : NSPanel

@property CPKEmojiPreviewView *previewView;
@property (copy) NSString *emojiString;

- (id)init;
- (void)dealloc;
- (id)_cornerMask;
- (void)showAtInsertionPoint;
- (void)showAtScreenLocation:(struct CGPoint { double x0; double x1; })a0;

@end

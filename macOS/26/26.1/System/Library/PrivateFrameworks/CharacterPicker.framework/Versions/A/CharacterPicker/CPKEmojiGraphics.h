@class NSFont;

@interface CPKEmojiGraphics : NSObject

@property (nonatomic) double fontSize;
@property (retain, nonatomic) NSFont *font;
@property (readonly) struct CGSize { double x0; double x1; } emojiCellBounds;
@property (readonly) struct CGSize { double x0; double x1; } emojiSize;

+ (id)_defaultCombinedEmojiGraphics;
+ (id)_defaultPlainEmojiGraphics;
+ (id)defaultEmojiGraphics;

- (void).cxx_destruct;

@end

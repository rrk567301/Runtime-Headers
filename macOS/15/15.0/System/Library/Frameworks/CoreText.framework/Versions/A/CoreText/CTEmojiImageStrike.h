@interface CTEmojiImageStrike : NSObject

@property (readonly) struct CGImage { } *cgImage;
@property (readonly) struct CGSize { double width; double height; } alignmentInset;

- (void)dealloc;
- (id)initWithImage:(struct CGImage { } *)a0 alignmentInset:(struct CGSize { double x0; double x1; })a1;

@end

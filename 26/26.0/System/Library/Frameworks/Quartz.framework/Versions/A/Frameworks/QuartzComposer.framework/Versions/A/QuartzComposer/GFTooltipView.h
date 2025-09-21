@class NSString;

@interface GFTooltipView : NSView {
    NSString *_string;
}

+ (id)backgroundColor;
+ (id)textAttributes;
+ (id)frameColor;
+ (id)sharedView;
+ (id)sharedWithString:(id)a0;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isOpaque;
- (void)dealloc;
- (id)string;
- (BOOL)isFlipped;
- (void)setString:(id)a0;

@end

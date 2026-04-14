@class NSString;

@interface GFTooltipView : NSView {
    NSString *_string;
}

+ (id)backgroundColor;
+ (id)textAttributes;
+ (id)sharedView;
+ (id)frameColor;
+ (id)sharedWithString:(id)a0;

- (void)dealloc;
- (id)string;
- (void)setString:(id)a0;
- (BOOL)isFlipped;
- (BOOL)isOpaque;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

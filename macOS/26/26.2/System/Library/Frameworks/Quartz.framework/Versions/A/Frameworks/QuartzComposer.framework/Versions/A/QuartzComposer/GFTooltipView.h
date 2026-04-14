@class NSString;

@interface GFTooltipView : NSView {
    NSString *_string;
}

+ (id)textAttributes;
+ (id)backgroundColor;
+ (id)frameColor;
+ (id)sharedView;
+ (id)sharedWithString:(id)a0;

- (BOOL)isOpaque;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)string;
- (BOOL)isFlipped;
- (void)setString:(id)a0;
- (void)dealloc;

@end

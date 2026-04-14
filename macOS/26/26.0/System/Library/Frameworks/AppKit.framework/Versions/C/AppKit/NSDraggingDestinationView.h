@class NSColor;

@interface NSDraggingDestinationView : NSView {
    BOOL _flashing;
}

@property (copy) NSColor *color;
@property long long feedbackStyle;
@property long long draggingDestinationStyle;
@property long long backgroundStyle;
@property BOOL flashing;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isOpaque;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (BOOL)isFlipped;
- (BOOL)clipsToBounds;

@end

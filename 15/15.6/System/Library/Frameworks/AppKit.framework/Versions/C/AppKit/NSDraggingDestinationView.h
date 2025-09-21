@class NSColor;

@interface NSDraggingDestinationView : NSView {
    char _flashing;
}

@property (copy) NSColor *color;
@property long long feedbackStyle;
@property long long draggingDestinationStyle;
@property long long backgroundStyle;
@property char flashing;

- (void)dealloc;
- (char)clipsToBounds;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)isFlipped;
- (char)isOpaque;

@end

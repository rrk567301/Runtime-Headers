@class NSColor, CAShapeLayer;

@interface DottedLineView : NSView {
    CAShapeLayer *_shapeLayer;
    NSColor *_color;
}

- (void)layout;
- (void)setBackgroundColor:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_updateShapeLayer;

@end

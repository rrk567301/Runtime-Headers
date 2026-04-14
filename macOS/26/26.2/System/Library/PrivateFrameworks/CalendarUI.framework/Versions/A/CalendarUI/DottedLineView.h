@class NSColor, CAShapeLayer;

@interface DottedLineView : NSView {
    CAShapeLayer *_shapeLayer;
    NSColor *_color;
}

- (void)layout;
- (void).cxx_destruct;
- (id)init;
- (void)setBackgroundColor:(id)a0;
- (void)_updateShapeLayer;

@end

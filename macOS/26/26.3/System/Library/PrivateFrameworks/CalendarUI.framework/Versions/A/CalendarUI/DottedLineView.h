@class NSColor, CAShapeLayer;

@interface DottedLineView : NSView {
    CAShapeLayer *_shapeLayer;
    NSColor *_color;
}

- (void)setBackgroundColor:(id)a0;
- (void)layout;
- (id)init;
- (void).cxx_destruct;
- (void)_updateShapeLayer;

@end

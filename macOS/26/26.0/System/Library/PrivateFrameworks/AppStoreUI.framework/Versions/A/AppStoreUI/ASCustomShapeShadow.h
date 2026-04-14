@class NSBezierPath;

@interface ASCustomShapeShadow : NSView {
    NSBezierPath *_shapePath;
}

- (id)initWithPath:(id)a0;
- (void)updateLayer;
- (BOOL)isFlipped;
- (void).cxx_destruct;
- (BOOL)wantsUpdateLayer;

@end

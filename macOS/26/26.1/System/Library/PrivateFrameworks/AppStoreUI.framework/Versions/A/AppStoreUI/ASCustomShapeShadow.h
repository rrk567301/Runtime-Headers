@class NSBezierPath;

@interface ASCustomShapeShadow : NSView {
    NSBezierPath *_shapePath;
}

- (id)initWithPath:(id)a0;
- (void).cxx_destruct;
- (void)updateLayer;
- (BOOL)isFlipped;
- (BOOL)wantsUpdateLayer;

@end

@class NSBezierPath;

@interface ASCustomShapeShadow : NSView {
    NSBezierPath *_shapePath;
}

- (void)updateLayer;
- (void).cxx_destruct;
- (BOOL)isFlipped;
- (id)initWithPath:(id)a0;
- (BOOL)wantsUpdateLayer;

@end

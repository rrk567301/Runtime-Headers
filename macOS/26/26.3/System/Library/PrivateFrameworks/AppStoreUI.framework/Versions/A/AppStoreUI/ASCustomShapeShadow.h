@class NSBezierPath;

@interface ASCustomShapeShadow : NSView {
    NSBezierPath *_shapePath;
}

- (id)initWithPath:(id)a0;
- (BOOL)isFlipped;
- (void).cxx_destruct;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;

@end

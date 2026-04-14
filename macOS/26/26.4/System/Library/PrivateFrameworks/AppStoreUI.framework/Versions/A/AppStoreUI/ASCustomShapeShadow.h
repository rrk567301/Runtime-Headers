@class NSBezierPath;

@interface ASCustomShapeShadow : NSView {
    NSBezierPath *_shapePath;
}

- (id)initWithPath:(id)a0;
- (void)updateLayer;
- (void).cxx_destruct;
- (BOOL)isFlipped;
- (BOOL)wantsUpdateLayer;

@end

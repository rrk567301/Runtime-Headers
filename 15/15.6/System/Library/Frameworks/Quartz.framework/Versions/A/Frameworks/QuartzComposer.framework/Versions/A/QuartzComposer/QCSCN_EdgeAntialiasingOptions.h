@interface QCSCN_EdgeAntialiasingOptions : NSObject {
    id _reserved;
}

@property (getter=isEnabled) char enabled;
@property double trimFactor;
@property double minimumEdgeLength;
@property double minimumEdgeAngle;
@property double minimumTriangleArea;
@property char debugMode;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)setParent:(id)a0;

@end

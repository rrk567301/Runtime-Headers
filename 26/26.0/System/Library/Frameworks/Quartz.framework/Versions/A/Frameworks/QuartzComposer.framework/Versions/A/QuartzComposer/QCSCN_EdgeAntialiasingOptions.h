@interface QCSCN_EdgeAntialiasingOptions : NSObject {
    id _reserved;
}

@property (getter=isEnabled) BOOL enabled;
@property double trimFactor;
@property double minimumEdgeLength;
@property double minimumEdgeAngle;
@property double minimumTriangleArea;
@property BOOL debugMode;

- (void)setParent:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end

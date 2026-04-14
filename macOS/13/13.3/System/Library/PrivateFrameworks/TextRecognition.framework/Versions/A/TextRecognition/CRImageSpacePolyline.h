@class NSString, NSArray;

@interface CRImageSpacePolyline : NSObject <CRCodable, CRPolyline>

@property (class, readonly) BOOL supportsSecureCoding;

@property void *_points;
@property struct ObjectRef<const CGPath *> { struct CGPath *mCFObject; } _pathRef;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) const struct CGPath { } *path;
@property (readonly) NSArray *pointValues;
@property (readonly) unsigned long long pointCount;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (void)appendPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithPoints:(void *)a0;
- (id)initWithPolyline:(id)a0;
- (id)initWithPoints:(struct CGPoint { double x0; double x1; } *)a0 count:(unsigned long long)a1;
- (void)appendPolyline:(id)a0;
- (id)crCodableDataRepresentation;
- (struct ObjectRef<const CGPath *> { struct CGPath *x0; })createPathWithTransformer:(id /* block */)a0;
- (void)enumeratePoints:(id /* block */)a0;
- (void)enumeratePointsWithTransformer:(id /* block */)a0 block:(id /* block */)a1;
- (struct CGSize { double x0; double x1; })estimatedLineSizeForPairedPointPolygon;
- (id)initWithCRCodableDataRepresentation:(id)a0;
- (id)initWithPointValues:(id)a0;
- (id)polylineByAppendingPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)polylineByAppendingPolyline:(id)a0;
- (id)simplified;

@end

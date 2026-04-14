@class NSString, NSArray;

@interface CRImageSpacePolyline : NSObject <CRCodable, CRPolyline> {
    void *__points;
    struct ObjectRef<const CGPath *> { struct CGPath *mCFObject; } __pathRef;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) struct CGPath { } *path;
@property (readonly) NSArray *pointValues;
@property (readonly) unsigned long long pointCount;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundingRect;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithPolyline:(id)a0;
- (void)enumeratePoints:(id /* block */)a0;
- (id)initWithPoints:(struct CGPoint { double x0; double x1; } *)a0 count:(unsigned long long)a1;
- (id)crCodableDataRepresentation;
- (struct CGSize { double x0; double x1; })estimatedLineSizeForPairedPointPolygon;
- (id)initWithCRCodableDataRepresentation:(id)a0;
- (id)initWithPointValues:(id)a0;
- (id)polylineByAppendingPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)polylineByAppendingPolyline:(id)a0;
- (id)rotated180;
- (id)simplified;

@end

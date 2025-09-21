@class CRImageSpacePolyline, NSString, NSArray;

@interface CRNormalizedPolyline : NSObject <CRCodable, CRPolyline>

@property (class, readonly) char supportsSecureCoding;

@property struct CGSize { double width; double height; } normalizationSize;
@property (retain) CRImageSpacePolyline *denormalizedPolyline;
@property struct ObjectRef<const CGPath *> { struct CGPath *mCFObject; } _pathRef;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) struct CGPath { } *path;
@property (readonly) NSArray *pointValues;
@property (readonly) unsigned long long pointCount;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (void)appendPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithPolyline:(id)a0;
- (void)appendPolyline:(id)a0;
- (id)crCodableDataRepresentation;
- (void)enumeratePoints:(id /* block */)a0;
- (id)initWithCRCodableDataRepresentation:(id)a0;
- (id)initWithDenormalizedPolyline:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)initWithNormalizedPointValues:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)initWithNormalizedPoints:(struct CGPoint { double x0; double x1; } *)a0 count:(unsigned long long)a1 size:(struct CGSize { double x0; double x1; })a2;
- (id)polylineByAppendingPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)polylineByAppendingPolyline:(id)a0;
- (id)rotated180;
- (id)simplified;

@end

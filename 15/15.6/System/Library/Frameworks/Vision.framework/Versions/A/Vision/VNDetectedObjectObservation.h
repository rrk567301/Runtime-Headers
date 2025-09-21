@class NSUUID, VNPixelBufferObservation;

@interface VNDetectedObjectObservation : VNObservation

@property (readonly, nonatomic) NSUUID *groupId;
@property (copy) NSUUID *identifier;
@property (readonly, nonatomic) VNPixelBufferObservation *instanceSegmentationMask;
@property (readonly, nonatomic) char providesBoundsNormalizedToROI;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingBox;
@property (readonly, nonatomic) VNPixelBufferObservation *globalSegmentationMask;

+ (char)supportsSecureCoding;
+ (char)boundingBoxIsCalculatedProperty;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)a0;
+ (id)observationWithBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (id)observationWithRequestRevision:(unsigned long long)a0 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)debugQuickLookObject;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundingBoxInTopLeftOrigin:(char)a0 orientation:(unsigned int)a1;
- (id)initWithOriginatingRequestSpecifier:(id)a0 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initWithOriginatingRequestSpecifier:(id)a0 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 groupId:(id)a2;
- (id)initWithRequestRevision:(unsigned long long)a0 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)vn_cloneObject;

@end

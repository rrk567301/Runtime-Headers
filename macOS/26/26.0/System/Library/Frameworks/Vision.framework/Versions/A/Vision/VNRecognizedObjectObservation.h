@class NSArray, VNPixelBufferObservation;

@interface VNRecognizedObjectObservation : VNDetectedObjectObservation

@property (readonly) VNPixelBufferObservation *segmentationMask;
@property (readonly, copy, nonatomic) NSArray *labels;

+ (BOOL)supportsSecureCoding;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithOriginatingRequestSpecifier:(id)a0 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 confidence:(float)a2 labels:(id)a3 segmentationMask:(id)a4 groupId:(id)a5;
- (id)initWithRequestRevision:(unsigned long long)a0 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 confidence:(float)a2 labels:(id)a3;
- (id)vn_cloneObject;

@end

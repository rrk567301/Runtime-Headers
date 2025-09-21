@interface VNImageHomographicAlignmentObservation : VNImageAlignmentObservation

@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[3]; } warpTransform;

+ (char)supportsSecureCoding;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)a0;

- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)vn_cloneObject;

@end

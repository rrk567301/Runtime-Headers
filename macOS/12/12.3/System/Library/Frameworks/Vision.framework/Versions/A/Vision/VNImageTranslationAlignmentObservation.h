@interface VNImageTranslationAlignmentObservation : VNImageAlignmentObservation

@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } alignmentTransform;

+ (BOOL)supportsSecureCoding;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)vn_cloneObject;

@end

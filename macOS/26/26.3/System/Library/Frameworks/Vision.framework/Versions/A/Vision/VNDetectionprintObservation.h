@class VNDetectionprint;

@interface VNDetectionprintObservation : VNObservation

@property (readonly, copy) VNDetectionprint *detectionprint;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)VNCoreMLTransformerDetectionprintAndReturnError:(id *)a0;
- (id)initWithOriginatingRequestSpecifier:(id)a0 detectionprint:(id)a1;
- (id)vn_cloneObject;

@end

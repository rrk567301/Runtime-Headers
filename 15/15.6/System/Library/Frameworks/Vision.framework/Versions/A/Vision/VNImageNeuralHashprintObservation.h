@class VN6Ac6Cyl5O5oK19HboyMBR;

@interface VNImageNeuralHashprintObservation : VNObservation

@property (readonly) VN6Ac6Cyl5O5oK19HboyMBR *imageNeuralHashprint;

+ (char)supportsSecureCoding;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithOriginatingRequestSpecifier:(id)a0 imageNeuralHashprint:(id)a1;
- (id)vn_cloneObject;

@end

@class NSArray;

@interface VNImageFingerprintsObservation : VNObservation

@property (readonly, copy) NSArray *fingerprintHashes;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithOriginatingRequestSpecifier:(id)a0 fingerprintHashes:(id)a1;

@end

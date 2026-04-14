@class NSArray;

@interface VNImageFingerprintsObservation : VNObservation

@property (readonly, copy) NSArray *fingerprintHashes;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithOriginatingRequestSpecifier:(id)a0 fingerprintHashes:(id)a1;

@end

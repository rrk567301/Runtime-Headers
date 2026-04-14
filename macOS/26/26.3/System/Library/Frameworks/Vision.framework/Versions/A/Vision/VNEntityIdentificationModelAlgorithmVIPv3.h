@interface VNEntityIdentificationModelAlgorithmVIPv3 : VNEntityIdentificationModelAlgorithm

@property long long indexType;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (Class)trainedModelClass;

@end

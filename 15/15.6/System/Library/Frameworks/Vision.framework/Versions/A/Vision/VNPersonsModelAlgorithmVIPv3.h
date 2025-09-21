@interface VNPersonsModelAlgorithmVIPv3 : VNPersonsModelAlgorithm

@property long long indexType;

+ (char)supportsSecureCoding;

- (id)description;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (Class)faceModelClass;

@end

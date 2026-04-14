@interface VNPersonsModelAlgorithmVIPv3 : VNPersonsModelAlgorithm

@property long long indexType;

+ (BOOL)supportsSecureCoding;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (Class)faceModelClass;

@end

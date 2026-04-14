@interface VNPersonsModelAlgorithmVIPv3 : VNPersonsModelAlgorithm

@property long long indexType;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (Class)faceModelClass;
- (id)description;
- (id)initWithCoder:(id)a0;

@end

@interface CCBlurAlgorithmDescriptor : CCAlgorithmDescriptor {
    int _revision;
}

@property (nonatomic) unsigned long long width;
@property (nonatomic) unsigned long long height;
@property (nonatomic) unsigned long long algorithm;
@property (nonatomic) float blurRadius;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)acceptVisitor:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end

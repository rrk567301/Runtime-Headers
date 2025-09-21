@interface CCIgnoreFlagAlgorithmDescriptor : CCAlgorithmDescriptor {
    int _revision;
}

@property (nonatomic) long long ignoreFlagsAlgorithm;

+ (BOOL)supportsSecureCoding;

- (void)acceptVisitor:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end

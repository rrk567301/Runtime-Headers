@interface CCXRDataDescriptor : CCDataDescriptor

@property (nonatomic) long long maximumNumberOfTargets;
@property (nonatomic) long long width;
@property (nonatomic) long long height;

+ (BOOL)supportsSecureCoding;

- (void)acceptVisitor:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

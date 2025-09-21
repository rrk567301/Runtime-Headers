@interface CCWorldDepthDataDescriptor : CCDataDescriptor

@property (nonatomic) long long lensModel;

+ (BOOL)supportsSecureCoding;

- (void)acceptVisitor:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

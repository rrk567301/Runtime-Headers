@interface CCWorldDepthDataDescriptor : CCDataDescriptor

@property (nonatomic) long long lensModel;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)acceptVisitor:(id)a0;

@end

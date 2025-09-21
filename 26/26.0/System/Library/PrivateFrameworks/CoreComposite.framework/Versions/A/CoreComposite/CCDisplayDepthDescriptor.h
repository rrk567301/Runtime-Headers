@interface CCDisplayDepthDescriptor : CCDataDescriptor

@property (nonatomic) void /* unknown type, empty encoding */ size;
@property (nonatomic) unsigned long long pixelFormat;
@property (nonatomic) long long lensModel;
@property (nonatomic) unsigned long long depthOrder;

+ (BOOL)supportsSecureCoding;

- (void)acceptVisitor:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end

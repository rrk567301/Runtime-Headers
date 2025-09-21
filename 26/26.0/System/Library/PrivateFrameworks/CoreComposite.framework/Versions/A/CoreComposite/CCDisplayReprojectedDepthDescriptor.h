@interface CCDisplayReprojectedDepthDescriptor : CCDataDescriptor

@property (nonatomic) BOOL depthSanityDisabled;
@property (nonatomic) unsigned long long depthOrder;
@property (nonatomic) unsigned long long reprojectionMode;
@property (nonatomic) void /* unknown type, empty encoding */ size;

+ (BOOL)supportsSecureCoding;

- (void)acceptVisitor:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end

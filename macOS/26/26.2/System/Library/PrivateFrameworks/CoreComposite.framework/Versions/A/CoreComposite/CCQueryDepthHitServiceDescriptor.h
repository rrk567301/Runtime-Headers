@interface CCQueryDepthHitServiceDescriptor : CCServiceDescriptor

@property (nonatomic) unsigned long long bufferOffset;

+ (id)new;
+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (BOOL)isSupported;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end

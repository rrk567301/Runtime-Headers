@interface CCMultiViewWarpServiceDescriptor : CCServiceDescriptor

@property (nonatomic) BOOL enableFlushPass;
@property (nonatomic) long long nSourceViews;
@property (nonatomic) long long warpAlgorithm;

+ (BOOL)supportsSecureCoding;
+ (id)new;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isSupported;

@end

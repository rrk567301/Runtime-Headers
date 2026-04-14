@interface CCMultiViewWarpServiceDescriptor : CCServiceDescriptor

@property (nonatomic) BOOL enableFlushPass;
@property (nonatomic) long long nSourceViews;
@property (nonatomic) long long warpAlgorithm;

+ (id)new;
+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (BOOL)isSupported;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end

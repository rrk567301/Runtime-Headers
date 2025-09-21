@class NSString;

@interface HMMutableCHIPVendor : HMCHIPVendor

@property (copy) NSString *name;
@property (getter=isAppleVendor) char appleVendor;
@property (getter=isSystemCommissionerVendor) char systemCommissionerVendor;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

@class NSString;

@interface HMMutableCHIPVendor : HMCHIPVendor

@property (copy) NSString *name;
@property (getter=isAppleVendor) BOOL appleVendor;

@end

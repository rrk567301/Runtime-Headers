@interface APSigningClientValidator : NSObject

+ (char)hasEntitlement:(id)a0;
+ (char)isAllowedClient;
+ (char)_validateAllowListingForPoolCreation:(id)a0;
+ (id)mockXPCObject;
+ (void)setMockXPCObject:(id)a0;

@end

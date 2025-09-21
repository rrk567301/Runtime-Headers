@interface FCRestrictions : NSObject

@property (nonatomic) char testing;
@property (nonatomic) long long isExplicitContentAllowedOverride;
@property (nonatomic) long long buildVersionNumber;
@property (readonly, nonatomic) char isExplicitContentAllowed;

+ (id)sharedInstance;
+ (long long)integerRepresentationOfShortVersionString:(id)a0;

- (id)init;
- (char)isContentAllowedInStorefrontID:(id)a0 withAllowedStorefrontIDs:(id)a1 blockedStorefrontIDs:(id)a2;
- (char)isContentBlockedInStorefrontID:(id)a0 withAllowedStorefrontIDs:(id)a1 blockedStorefrontIDs:(id)a2;
- (char)isNewsVersionAllowed:(long long)a0;
- (char)isNewsVersionAllowedWithMinNewsVersion:(long long)a0 maxNewsVersion:(long long)a1;
- (void)t_startForcingExplicitContentDisallowed;
- (void)t_stopForcingExplicitContentDisallowed;

@end

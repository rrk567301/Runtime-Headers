@interface FCRestrictions : NSObject

@property (nonatomic) BOOL testing;
@property (nonatomic) long long isExplicitContentAllowedOverride;
@property (nonatomic) long long buildVersionNumber;
@property (readonly, nonatomic) BOOL isExplicitContentAllowed;

+ (id)sharedInstance;
+ (long long)integerRepresentationOfShortVersionString:(id)a0;

- (void)t_startForcingExplicitContentDisallowed;
- (BOOL)isNewsVersionAllowed:(long long)a0;
- (BOOL)isNewsVersionAllowedWithMinNewsVersion:(long long)a0 maxNewsVersion:(long long)a1;
- (id)init;
- (void)t_stopForcingExplicitContentDisallowed;
- (BOOL)isContentAllowedInStorefrontID:(id)a0 withAllowedStorefrontIDs:(id)a1 blockedStorefrontIDs:(id)a2;
- (BOOL)isContentBlockedInStorefrontID:(id)a0 withAllowedStorefrontIDs:(id)a1 blockedStorefrontIDs:(id)a2;

@end

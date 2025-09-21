@interface AMSRestrictions : NSObject

@property (class, readonly) char allowAccountModifications;
@property (class, readonly) char eroticaAllowed;
@property (class, readonly) char explicitContentAllowed;
@property (class, readonly) char inAppPurchaseAllowed;
@property (class, readonly) long long maximumMediaRank;
@property (class, readonly) char onDeviceDiagnosticsAllowed;
@property (class, readonly, getter=isParentalControlEnabled) char parentalControlEnabled;
@property (class, readonly) char requirePasswordImmediately;

+ (char)allowActiveAccountModifications;
+ (long long)explicitContentSettingForBundleID:(id)a0;
+ (id)rankForMediaType:(unsigned long long)a0;

@end

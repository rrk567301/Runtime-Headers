@interface _WKSystemPreferences : NSObject

+ (char)isCaptivePortalModeEnabled;
+ (char)isCaptivePortalModeIgnored:(id)a0;
+ (void)setCaptivePortalModeEnabled:(char)a0;
+ (void)setCaptivePortalModeIgnored:(id)a0 ignore:(char)a1;

@end

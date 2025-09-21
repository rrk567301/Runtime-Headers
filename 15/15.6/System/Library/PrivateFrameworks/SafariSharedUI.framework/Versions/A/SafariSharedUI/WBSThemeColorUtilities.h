@interface WBSThemeColorUtilities : NSObject

+ (char)shouldOverrideTintColorForThemeColor:(id)a0;
+ (id)updateThemeColorForWebView:(id)a0 darkModeEnabled:(char)a1;
+ (char)_shouldIgnoreThemeColorForContrastWithWindowButtons:(id)a0;
+ (id)overrideTabColorForThemeColor:(id)a0;
+ (char)shouldIgnoreThemeColorForContrastWithActiveTab:(id)a0 privateBrowsingEnabled:(char)a1;
+ (id)updateThemeColorForWebView:(id)a0 darkModeEnabled:(char)a1 allowFallbackColors:(char)a2 updateUnderPageBackgroundColor:(char)a3;

@end

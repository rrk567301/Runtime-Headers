@class LSApplicationRecord, NSDictionary, NSURL, LSApplicationProxy;

@interface LSAppLink : NSObject <NSSecureCoding>

@property (class, readonly) char currentProcessHasReadAccess;
@property (class, readonly) char currentProcessHasWriteAccess;
@property (class, readonly, nonatomic, getter=areEnabledByDefault) char enabledByDefault;
@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *browserSettings;
@property long long openStrategy;
@property (copy) NSURL *URL;
@property (retain) LSApplicationRecord *targetApplicationRecord;
@property (readonly) LSApplicationProxy *targetApplicationProxy;
@property (nonatomic, getter=isEnabled) char enabled;

+ (char)URLComponentsAreValidForAppLinks:(id)a0 error:(id *)a1;
+ (char)_URLIsValidForAppLinks:(id)a0 error:(id *)a1;
+ (id)_appLinkWithURL:(id)a0 applicationRecord:(id)a1 plugInClass:(Class)a2;
+ (id)_appLinksWithState:(id)a0 context:(struct LSContext { id x0; } *)a1 limit:(unsigned long long)a2 URLComponents:(id)a3 error:(id *)a4;
+ (id)_appLinksWithState:(id)a0 context:(struct LSContext { id x0; } *)a1 limit:(unsigned long long)a2 error:(id *)a3;
+ (id)_dispatchQueue;
+ (void)_openAppLink:(id)a0 state:(id)a1 completionHandler:(id /* block */)a2;
+ (void)_openWithAppLink:(id)a0 state:(id)a1 completionHandler:(id /* block */)a2;
+ (void)afterAppLinksBecomeAvailableForURL:(id)a0 limit:(unsigned long long)a1 performBlock:(id /* block */)a2;
+ (id)appLinksWithURL:(id)a0 limit:(unsigned long long)a1 error:(id *)a2;
+ (id)appLinksWithURL:(id)a0 limit:(unsigned long long)a1 includeLinksForCurrentApplication:(char)a2 error:(id *)a3;
+ (char)auditTokenHasReadAccess:(struct { unsigned int x0[8]; })a0;
+ (char)auditTokenHasWriteAccess:(struct { unsigned int x0[8]; })a0;
+ (void)getAppLinkWithURL:(id)a0 completionHandler:(id /* block */)a1;
+ (void)getAppLinksWithURL:(id)a0 completionHandler:(id /* block */)a1;
+ (void)openWithURL:(id)a0 completionHandler:(id /* block */)a1;
+ (void)openWithURL:(id)a0 configuration:(id)a1 completionHandler:(id /* block */)a2;
+ (char)removeAllSettingsReturningError:(id *)a0;
+ (char)setSettingsSwitchState:(long long)a0 forApplicationIdentifier:(id)a1 error:(id *)a2;
+ (long long)settingsSwitchStateForApplicationIdentifier:(id)a0;

- (id)debugDescription;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setEnabled:(char)a0;
- (char)isAlwaysEnabled;
- (id)_appleEventWithState:(id)a0 preserveReferrerURL:(char)a1 error:(id *)a2;
- (id)_userActivityWithState:(id)a0 error:(id *)a1;
- (void)openInWebBrowser:(char)a0 setAppropriateOpenStrategyAndWebBrowserState:(id)a1 completionHandler:(id /* block */)a2;
- (void)openInWebBrowser:(char)a0 setOpenStrategy:(long long)a1 webBrowserState:(id)a2 completionHandler:(id /* block */)a3;
- (void)openInWebBrowser:(char)a0 setOpenStrategy:(long long)a1 webBrowserState:(id)a2 configuration:(id)a3 completionHandler:(id /* block */)a4;
- (long long)openStrategy;
- (void)openWithCompletionHandler:(id /* block */)a0;
- (void)openWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (char)removeSettingsReturningError:(id *)a0;
- (char)setBrowserSettings:(id)a0 error:(id *)a1;
- (char)setEnabled:(char)a0 error:(id *)a1;
- (void)setOpenStrategy:(long long)a0;

@end

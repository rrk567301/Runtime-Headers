@class NSString, NSDate;
@protocol HDAppLauncherClient;

@interface HDClientKeepAliveAssertion : HDAssertion {
    long long _launchCount;
    NSDate *_lastLaunchAttempt;
    NSString *_clientBundleIdentifier;
    id<HDAppLauncherClient> _weakClient;
}

- (void).cxx_destruct;

@end

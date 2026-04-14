@interface HKLocalAppInstallationManager : HKWatchAppInstallationManager

- (void)startObserving;
- (id)initWithBundleIdentifier:(id)a0;
- (void)stopObserving;
- (id)isWatchAppInstalledWithError:(id *)a0;

@end

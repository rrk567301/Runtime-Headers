@interface HKLocalAppInstallationManager : HKWatchAppInstallationManager

- (void)stopObserving;
- (void)startObserving;
- (id)initWithBundleIdentifier:(id)a0;
- (id)isWatchAppInstalledWithError:(id *)a0;

@end

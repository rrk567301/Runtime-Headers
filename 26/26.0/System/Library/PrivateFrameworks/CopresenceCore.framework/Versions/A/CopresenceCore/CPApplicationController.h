@interface CPApplicationController : NSObject <LSApplicationWorkspaceObserverProtocol> {
    void /* unknown type, empty encoding */ supportedBundleIdentifierCache;
    void /* unknown type, empty encoding */ definedSystemActivityIdentifiersCache;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ observers;
    void /* unknown type, empty encoding */ featureFlags;
}

- (void)applicationsDidUninstall:(id)a0;
- (id)init;
- (void)applicationsDidInstall:(id)a0;
- (void).cxx_destruct;

@end

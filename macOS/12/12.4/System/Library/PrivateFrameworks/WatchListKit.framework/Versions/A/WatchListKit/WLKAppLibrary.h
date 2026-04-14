@class NSString, NSDictionary, NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface WLKAppLibrary : NSObject <LSApplicationWorkspaceObserverProtocol> {
    NSDictionary *_appProxies;
    NSArray *_allAppBundleIdentifiers;
    NSArray *_installedAppBundleIdentifiers;
    NSArray *_subscribedAppBundleIdentifiers;
    NSArray *_testAppBundleIdentifiers;
    NSArray *_nonConformingAppBundleIdentifiers;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_refreshQueue;
    BOOL _appLibraryNeedsRefresh;
    long long _ignoreAppLibraryChangesCount;
    int _didChangeNotificationToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultAppLibrary;

- (id)init;
- (void).cxx_destruct;
- (void)applicationsDidInstall:(id)a0;
- (void)applicationsDidUninstall:(id)a0;
- (id)dictionaryRepresentation;
- (id)refresh;
- (id)subscriptionInfoForBundle:(id)a0;
- (BOOL)isTVAppInstalled;
- (id)installedAppBundleIdentifiers;
- (id)_refreshAppLibrary;
- (void)_handleInvalidationWithReason:(id)a0;
- (id)subscribedAppBundleIdentifiers;
- (id)testAppBundleIdentifiers;
- (id)allAppBundleIdentifiers;
- (id)installedAppProxies;
- (id)subscribedAppProxies;
- (id)testAppProxies;
- (id)allAppProxies;
- (id)localizedNameForBundle:(id)a0;
- (id)_subscriptionInfosForProxies:(id)a0;
- (id)_nonConformingAppBundleIdentifiers;
- (id)_nonConformingAppProxies;
- (void)beginIgnoringAppLibraryChanges;
- (void)endIgnoringAppLibraryChanges;
- (id)_bundleIdentifiersfromProxies:(id)a0;
- (void)_subscriptionsDidChangeNotification:(id)a0;

@end

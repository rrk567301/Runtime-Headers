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

- (id)installedAppBundleIdentifiers;
- (void)beginIgnoringAppLibraryChanges;
- (id)testAppProxies;
- (void)applicationsDidUninstall:(id)a0;
- (id)refresh;
- (id)_refreshAppLibrary;
- (id)installedAppProxies;
- (id)_nonConformingAppProxies;
- (id)allAppProxies;
- (void)endIgnoringAppLibraryChanges;
- (id)subscribedAppProxies;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)allAppBundleIdentifiers;
- (id)subscribedAppBundleIdentifiers;
- (id)_nonConformingAppBundleIdentifiers;
- (BOOL)isTVAppInstalled;
- (id)init;
- (id)_subscriptionInfosForProxies:(id)a0;
- (id)allAppProxiesPerCategory;
- (id)localizedNameForBundle:(id)a0;
- (void)_handleInvalidationWithReason:(id)a0;
- (id)subscriptionInfoForBundle:(id)a0;
- (void)applicationsDidInstall:(id)a0;
- (id)_bundleIdentifiersfromProxies:(id)a0;
- (void)_subscriptionsDidChangeNotification:(id)a0;
- (id)testAppBundleIdentifiers;
- (id)_supportPath;

@end

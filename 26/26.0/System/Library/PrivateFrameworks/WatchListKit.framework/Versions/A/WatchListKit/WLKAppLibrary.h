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

- (void)applicationsDidUninstall:(id)a0;
- (id)allAppProxiesPerCategory;
- (id)refresh;
- (id)testAppProxies;
- (BOOL)isTVAppInstalled;
- (id)_nonConformingAppProxies;
- (id)allAppProxies;
- (void)_subscriptionsDidChangeNotification:(id)a0;
- (id)dictionaryRepresentation;
- (id)allAppBundleIdentifiers;
- (void)_handleInvalidationWithReason:(id)a0;
- (id)init;
- (id)installedAppBundleIdentifiers;
- (id)subscriptionInfoForBundle:(id)a0;
- (id)_subscriptionInfosForProxies:(id)a0;
- (void)applicationsDidInstall:(id)a0;
- (void)beginIgnoringAppLibraryChanges;
- (id)_nonConformingAppBundleIdentifiers;
- (void)endIgnoringAppLibraryChanges;
- (id)installedAppProxies;
- (id)localizedNameForBundle:(id)a0;
- (id)_refreshAppLibrary;
- (id)_bundleIdentifiersfromProxies:(id)a0;
- (id)subscribedAppBundleIdentifiers;
- (id)testAppBundleIdentifiers;
- (id)subscribedAppProxies;
- (void).cxx_destruct;

@end

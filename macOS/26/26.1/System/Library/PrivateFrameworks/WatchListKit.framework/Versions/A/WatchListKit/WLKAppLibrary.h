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

- (void)applicationsDidInstall:(id)a0;
- (void)applicationsDidUninstall:(id)a0;
- (id)refresh;
- (id)_refreshAppLibrary;
- (void)_subscriptionsDidChangeNotification:(id)a0;
- (id)dictionaryRepresentation;
- (id)_subscriptionInfosForProxies:(id)a0;
- (BOOL)isTVAppInstalled;
- (id)installedAppProxies;
- (id)allAppProxiesPerCategory;
- (id)_bundleIdentifiersfromProxies:(id)a0;
- (id)subscriptionInfoForBundle:(id)a0;
- (id)installedAppBundleIdentifiers;
- (id)testAppProxies;
- (id)allAppProxies;
- (id)_nonConformingAppBundleIdentifiers;
- (id)subscribedAppBundleIdentifiers;
- (id)allAppBundleIdentifiers;
- (id)testAppBundleIdentifiers;
- (id)_nonConformingAppProxies;
- (void)endIgnoringAppLibraryChanges;
- (void)_handleInvalidationWithReason:(id)a0;
- (void).cxx_destruct;
- (id)subscribedAppProxies;
- (void)beginIgnoringAppLibraryChanges;
- (id)localizedNameForBundle:(id)a0;
- (id)init;

@end

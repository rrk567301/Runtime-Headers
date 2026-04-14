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

- (id)refresh;
- (id)subscribedAppProxies;
- (id)_subscriptionInfosForProxies:(id)a0;
- (void)applicationsDidUninstall:(id)a0;
- (void)endIgnoringAppLibraryChanges;
- (void)_subscriptionsDidChangeNotification:(id)a0;
- (BOOL)isTVAppInstalled;
- (id)allAppProxies;
- (id)testAppBundleIdentifiers;
- (void)beginIgnoringAppLibraryChanges;
- (id)testAppProxies;
- (void)_handleInvalidationWithReason:(id)a0;
- (void)applicationsDidInstall:(id)a0;
- (void).cxx_destruct;
- (id)_nonConformingAppBundleIdentifiers;
- (id)subscribedAppBundleIdentifiers;
- (id)installedAppProxies;
- (id)allAppProxiesPerCategory;
- (id)subscriptionInfoForBundle:(id)a0;
- (id)_refreshAppLibrary;
- (id)_nonConformingAppProxies;
- (id)localizedNameForBundle:(id)a0;
- (id)_bundleIdentifiersfromProxies:(id)a0;
- (id)allAppBundleIdentifiers;
- (id)init;
- (id)dictionaryRepresentation;
- (id)installedAppBundleIdentifiers;

@end

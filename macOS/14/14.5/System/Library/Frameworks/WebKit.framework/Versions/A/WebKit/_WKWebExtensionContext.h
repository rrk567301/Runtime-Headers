@class NSString, NSURL, NSArray, NSSet, _WKWebExtension, NSDictionary, _WKWebExtensionController, WKWebViewConfiguration, WKWebView;
@protocol _WKWebExtensionWindow;

@interface _WKWebExtensionContext : NSObject <WKObject> {
    struct ObjectStorage<WebKit::WebExtensionContext> { struct type { unsigned char __lx[584]; } data; } _webExtensionContext;
}

@property (readonly, nonatomic) void *_webExtensionContext;
@property (nonatomic, getter=_inTestingMode, setter=_setTestingMode:) BOOL _testingMode;
@property (readonly, nonatomic) WKWebView *_backgroundWebView;
@property (readonly, nonatomic) NSURL *_backgroundContentURL;
@property (readonly, nonatomic) _WKWebExtension *webExtension;
@property (readonly, weak, nonatomic) _WKWebExtensionController *webExtensionController;
@property (readonly, nonatomic, getter=isLoaded) BOOL loaded;
@property (copy, nonatomic) NSURL *baseURL;
@property (copy, nonatomic) NSString *uniqueIdentifier;
@property (nonatomic, getter=isInspectable) BOOL inspectable;
@property (readonly, copy, nonatomic) WKWebViewConfiguration *webViewConfiguration;
@property (readonly, copy, nonatomic) NSURL *optionsPageURL;
@property (readonly, copy, nonatomic) NSURL *overrideNewTabPageURL;
@property (copy, nonatomic) NSDictionary *grantedPermissions;
@property (copy, nonatomic) NSDictionary *grantedPermissionMatchPatterns;
@property (copy, nonatomic) NSDictionary *deniedPermissions;
@property (copy, nonatomic) NSDictionary *deniedPermissionMatchPatterns;
@property (nonatomic) BOOL requestedOptionalAccessToAllHosts;
@property (nonatomic) BOOL hasAccessInPrivateBrowsing;
@property (readonly, copy, nonatomic) NSSet *currentPermissions;
@property (readonly, copy, nonatomic) NSSet *currentPermissionMatchPatterns;
@property (readonly, nonatomic) BOOL hasAccessToAllURLs;
@property (readonly, nonatomic) BOOL hasAccessToAllHosts;
@property (readonly, nonatomic) BOOL hasInjectedContent;
@property (readonly, copy, nonatomic) NSArray *commands;
@property (readonly, copy, nonatomic) NSArray *openWindows;
@property (readonly, weak, nonatomic) id<_WKWebExtensionWindow> focusedWindow;
@property (readonly, copy, nonatomic) NSSet *openTabs;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contextForExtension:(id)a0;

- (void)dealloc;
- (void)didFocusWindow:(id)a0;
- (void)didCloseWindow:(id)a0;
- (BOOL)hasAccessToURL:(id)a0;
- (void)performCommand:(id)a0;
- (id)actionForTab:(id)a0;
- (void)clearUserGestureInTab:(id)a0;
- (id)commandForEvent:(id)a0;
- (void)didActivateTab:(id)a0 previousActiveTab:(id)a1;
- (void)didChangeTabProperties:(unsigned long long)a0 forTab:(id)a1;
- (void)didCloseTab:(id)a0 windowIsClosing:(BOOL)a1;
- (void)didDeselectTabs:(id)a0;
- (void)didMoveTab:(id)a0 fromIndex:(unsigned long long)a1 inWindow:(id)a2;
- (void)didOpenTab:(id)a0;
- (void)didOpenWindow:(id)a0;
- (void)didReplaceTab:(id)a0 withTab:(id)a1;
- (void)didSelectTabs:(id)a0;
- (BOOL)hasAccessToURL:(id)a0 inTab:(id)a1;
- (BOOL)hasActiveUserGestureInTab:(id)a0;
- (BOOL)hasInjectedContentForURL:(id)a0;
- (BOOL)hasPermission:(id)a0;
- (BOOL)hasPermission:(id)a0 inTab:(id)a1;
- (id)initForExtension:(id)a0;
- (id)menuItemsForTab:(id)a0;
- (void)performActionForTab:(id)a0;
- (BOOL)performCommandForEvent:(id)a0;
- (long long)permissionStatusForMatchPattern:(id)a0;
- (long long)permissionStatusForMatchPattern:(id)a0 inTab:(id)a1;
- (long long)permissionStatusForPermission:(id)a0;
- (long long)permissionStatusForPermission:(id)a0 inTab:(id)a1;
- (long long)permissionStatusForURL:(id)a0;
- (long long)permissionStatusForURL:(id)a0 inTab:(id)a1;
- (void)setPermissionStatus:(long long)a0 forMatchPattern:(id)a1;
- (void)setPermissionStatus:(long long)a0 forMatchPattern:(id)a1 expirationDate:(id)a2;
- (void)setPermissionStatus:(long long)a0 forPermission:(id)a1;
- (void)setPermissionStatus:(long long)a0 forPermission:(id)a1 expirationDate:(id)a2;
- (void)setPermissionStatus:(long long)a0 forURL:(id)a1;
- (void)setPermissionStatus:(long long)a0 forURL:(id)a1 expirationDate:(id)a2;
- (void)userGesturePerformedInTab:(id)a0;

@end

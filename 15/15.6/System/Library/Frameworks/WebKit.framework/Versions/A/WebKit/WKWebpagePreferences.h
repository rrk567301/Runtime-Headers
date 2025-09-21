@class NSString;

@interface WKWebpagePreferences : NSObject <WKObject> {
    struct ObjectStorage<API::WebsitePolicies> { struct type { unsigned char __lx[176]; } data; } _websitePolicies;
}

@property (class, readonly, nonatomic) WKWebpagePreferences *defaultPreferences;

@property (nonatomic) long long preferredContentMode;
@property (nonatomic) char allowsContentJavaScript;
@property (nonatomic, getter=isLockdownModeEnabled) char lockdownModeEnabled;
@property (nonatomic) long long preferredHTTPSNavigationPolicy;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)accessInstanceVariablesDirectly;

- (void)dealloc;
- (id)init;
- (long long)_autoplayPolicy;
- (id)_activeContentRuleListActionPatterns;
- (char)_allowPrivacyProxy;
- (char)_allowSiteSpecificQuirksToOverrideCompatibilityMode;
- (unsigned long long)_allowedAutoplayQuirks;
- (id)_applicationNameForUserAgentWithModernCompatibility;
- (char)_captivePortalModeEnabled;
- (unsigned long long)_colorSchemePreference;
- (char)_contentBlockersEnabled;
- (id)_customHeaderFields;
- (id)_customNavigatorPlatform;
- (id)_customUserAgent;
- (id)_customUserAgentAsSiteSpecificQuirks;
- (unsigned long long)_deviceOrientationAndMotionAccessPolicy;
- (unsigned long long)_modalContainerObservationPolicy;
- (unsigned long long)_mouseEventPolicy;
- (char)_networkConnectionIntegrityEnabled;
- (unsigned long long)_networkConnectionIntegrityPolicy;
- (unsigned long long)_popUpPolicy;
- (char)_pushAndNotificationAPIEnabled;
- (void)_setActiveContentRuleListActionPatterns:(id)a0;
- (void)_setAllowPrivacyProxy:(char)a0;
- (void)_setAllowSiteSpecificQuirksToOverrideCompatibilityMode:(char)a0;
- (void)_setAllowedAutoplayQuirks:(unsigned long long)a0;
- (void)_setApplicationNameForUserAgentWithModernCompatibility:(id)a0;
- (void)_setAutoplayPolicy:(long long)a0;
- (void)_setCaptivePortalModeEnabled:(char)a0;
- (void)_setColorSchemePreference:(unsigned long long)a0;
- (void)_setContentBlockersEnabled:(char)a0;
- (void)_setContentRuleListsEnabled:(char)a0 exceptions:(id)a1;
- (void)_setCustomHeaderFields:(id)a0;
- (void)_setCustomNavigatorPlatform:(id)a0;
- (void)_setCustomUserAgent:(id)a0;
- (void)_setCustomUserAgentAsSiteSpecificQuirks:(id)a0;
- (void)_setDeviceOrientationAndMotionAccessPolicy:(unsigned long long)a0;
- (void)_setModalContainerObservationPolicy:(unsigned long long)a0;
- (void)_setMouseEventPolicy:(unsigned long long)a0;
- (void)_setNetworkConnectionIntegrityEnabled:(char)a0;
- (void)_setNetworkConnectionIntegrityPolicy:(unsigned long long)a0;
- (void)_setPopUpPolicy:(unsigned long long)a0;
- (void)_setPushAndNotificationAPIEnabled:(char)a0;
- (void)_setUserContentController:(id)a0;
- (void)_setVisibilityAdjustmentSelectors:(id)a0;
- (void)_setVisibilityAdjustmentSelectorsIncludingShadowHosts:(id)a0;
- (void)_setWebsiteDataStore:(id)a0;
- (id)_userContentController;
- (id)_visibilityAdjustmentSelectors;
- (id)_visibilityAdjustmentSelectorsIncludingShadowHosts;
- (id)_websiteDataStore;

@end

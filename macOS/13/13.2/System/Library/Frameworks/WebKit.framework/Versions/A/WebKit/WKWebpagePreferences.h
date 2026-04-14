@class NSString;

@interface WKWebpagePreferences : NSObject <WKObject> {
    struct ObjectStorage<API::WebsitePolicies> { struct type { unsigned char __lx[160]; } data; } _websitePolicies;
    struct unique_ptr<WebKit::WebPagePreferencesCaptivePortalModeObserver, std::default_delete<WebKit::WebPagePreferencesCaptivePortalModeObserver>> { struct __compressed_pair<WebKit::WebPagePreferencesCaptivePortalModeObserver *, std::default_delete<WebKit::WebPagePreferencesCaptivePortalModeObserver>> { struct WebPagePreferencesCaptivePortalModeObserver *__value_; } __ptr_; } _captivePortalModeObserver;
}

@property (class, readonly, nonatomic) WKWebpagePreferences *defaultPreferences;

@property (nonatomic) long long preferredContentMode;
@property (nonatomic) BOOL allowsContentJavaScript;
@property (nonatomic, getter=isLockdownModeEnabled) BOOL lockdownModeEnabled;
@property (readonly) struct Object { void /* function */ **x0; id x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)_customUserAgent;
- (void)_setCustomUserAgent:(id)a0;
- (id)_userContentController;
- (id)_websiteDataStore;
- (void)_setContentBlockersEnabled:(BOOL)a0;
- (BOOL)_contentBlockersEnabled;
- (void)_setActiveContentRuleListActionPatterns:(id)a0;
- (id)_activeContentRuleListActionPatterns;
- (void)_setAllowedAutoplayQuirks:(unsigned long long)a0;
- (unsigned long long)_allowedAutoplayQuirks;
- (void)_setAutoplayPolicy:(long long)a0;
- (long long)_autoplayPolicy;
- (void)_setDeviceOrientationAndMotionAccessPolicy:(unsigned long long)a0;
- (unsigned long long)_deviceOrientationAndMotionAccessPolicy;
- (void)_setPopUpPolicy:(unsigned long long)a0;
- (unsigned long long)_popUpPolicy;
- (id)_customHeaderFields;
- (void)_setCustomHeaderFields:(id)a0;
- (void)_setWebsiteDataStore:(id)a0;
- (void)_setUserContentController:(id)a0;
- (void)_setCustomUserAgentAsSiteSpecificQuirks:(id)a0;
- (id)_customUserAgentAsSiteSpecificQuirks;
- (void)_setCustomNavigatorPlatform:(id)a0;
- (id)_customNavigatorPlatform;
- (BOOL)_allowSiteSpecificQuirksToOverrideCompatibilityMode;
- (void)_setAllowSiteSpecificQuirksToOverrideCompatibilityMode:(BOOL)a0;
- (id)_applicationNameForUserAgentWithModernCompatibility;
- (void)_setApplicationNameForUserAgentWithModernCompatibility:(id)a0;
- (void)_setCaptivePortalModeEnabled:(BOOL)a0;
- (BOOL)_captivePortalModeEnabled;
- (void)_setAllowPrivacyProxy:(BOOL)a0;
- (BOOL)_allowPrivacyProxy;
- (unsigned long long)_colorSchemePreference;
- (void)_setColorSchemePreference:(unsigned long long)a0;
- (void)_setMouseEventPolicy:(unsigned long long)a0;
- (unsigned long long)_mouseEventPolicy;
- (void)_setModalContainerObservationPolicy:(unsigned long long)a0;
- (unsigned long long)_modalContainerObservationPolicy;

@end

@class NSString;

@interface AEEmptyPreferences : NSObject <AEPreferences>

@property (nonatomic, getter=isPortalDemoModeActive) BOOL portalDemoModeActive;
@property (nonatomic, getter=shouldRestrictMedia) BOOL restrictMedia;
@property (nonatomic, getter=shouldScrubPasteboard) BOOL scrubPasteboard;
@property (nonatomic, getter=shouldRestrictNetworkAccess) BOOL restrictNetworkAccess;
@property (nonatomic, getter=shouldStopAirPlayBeforehand) BOOL stopAirPlayBeforehand;
@property (nonatomic, getter=shouldFailOnDeactivation) BOOL failOnDeactivation;
@property (nonatomic, getter=shouldEnterSandbox) BOOL enterSandbox;
@property (nonatomic, getter=shouldPresentShields) BOOL presentShields;
@property (nonatomic, getter=shouldDisableSiri) BOOL disableSiri;
@property (nonatomic, getter=shouldDisableContinuity) BOOL disableContinuity;
@property (nonatomic, getter=shouldRestrictFrontmostApp) BOOL restrictFrontmostApp;
@property (nonatomic, getter=shouldRestrictContentCapture) BOOL restrictContentCapture;
@property (nonatomic, getter=shouldDisableTrackpadLookup) BOOL disableTrackpadLookup;
@property (nonatomic, getter=shouldCaptureDisplays) BOOL captureDisplays;
@property (nonatomic, getter=shouldElevateWindows) BOOL elevateWindows;
@property (nonatomic, getter=shouldDisableDictation) BOOL disableDictation;
@property (nonatomic, getter=shouldDisableQuickNote) BOOL disableQuickNote;
@property (nonatomic, getter=shouldEnforceSingleAppMode) BOOL enforceSingleAppMode;
@property (nonatomic, getter=shouldShowPromptsAndBanners) BOOL showPromptsAndBanners;
@property (nonatomic, getter=shouldForceScreenMirroring) BOOL forceScreenMirroring;
@property (nonatomic, getter=shouldAllowRemotelyKillingAgent) BOOL allowRemotelyKillingAgent;
@property (nonatomic) double expirationTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end

@class NSArray;

@interface ADTrackingTransparency : NSObject

@property (readonly, nonatomic) char crossAppTrackingAllowedSwitchEnabled;
@property (readonly, nonatomic) long long crossAppTrackingAllowedSwitchDisabledReason;
@property (nonatomic) char crossAppTrackingAllowed;
@property (readonly, nonatomic) char personalizedAdsSwitchEnabled;
@property (readonly, nonatomic) long long personalizedAdsSwitchDisabledReason;
@property (nonatomic) char personalizedAds;
@property (readonly, nonatomic) char personalizedAdsAvailable;
@property (readonly, nonatomic) char shouldShowPersonalizedAdsToggle;
@property (readonly, nonatomic) char shouldPresentPersonalizedAdsOnboarding;
@property (readonly, nonatomic) char personalizedAdsAvailableForAdPlatforms;
@property (nonatomic) long long acknowledgedVersionForPersonalizedAds;
@property (readonly, nonatomic) long long latestVersionForPersonalizedAdsConsent;
@property (readonly, nonatomic) NSArray *adSwitchDisabledReasons;

- (char)_isUserManagedRestricted;
- (char)_userAllowedToChangeSettings;
- (char)_isUserEDURestricted;
- (char)_isUserProtoU13State;
- (long long)accountLevelSwitchDisabledReason;
- (long long)accountRestrictionReason;
- (id)appTrackingServiceProxy:(id)a0;
- (id)appTrackingXPCConnection:(id /* block */)a0 withInvalidation:(id /* block */)a1;
- (char)isPersonalizedAdsScreenTimeRestricted;
- (void)personalizedAdsAvailable:(id /* block */)a0;
- (char)shouldDisplayPAUI;

@end

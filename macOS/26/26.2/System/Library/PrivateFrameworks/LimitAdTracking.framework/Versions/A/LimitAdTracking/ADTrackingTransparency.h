@class NSArray;

@interface ADTrackingTransparency : NSObject

@property (readonly, nonatomic) BOOL crossAppTrackingAllowedSwitchEnabled;
@property (readonly, nonatomic) long long crossAppTrackingAllowedSwitchDisabledReason;
@property (nonatomic) BOOL crossAppTrackingAllowed;
@property (readonly, nonatomic) BOOL personalizedAdsSwitchEnabled;
@property (readonly, nonatomic) long long personalizedAdsSwitchDisabledReason;
@property (nonatomic) BOOL personalizedAds;
@property (readonly, nonatomic) BOOL personalizedAdsAvailable;
@property (readonly, nonatomic) BOOL shouldShowPersonalizedAdsToggle;
@property (readonly, nonatomic) BOOL shouldPresentPersonalizedAdsOnboarding;
@property (readonly, nonatomic) BOOL personalizedAdsAvailableForAdPlatforms;
@property (nonatomic) long long acknowledgedVersionForPersonalizedAds;
@property (readonly, nonatomic) long long latestVersionForPersonalizedAdsConsent;
@property (readonly, nonatomic) NSArray *adSwitchDisabledReasons;

- (BOOL)_isUserManagedRestricted;
- (BOOL)_isUserProtoU13State;
- (void)personalizedAdsAvailable:(id /* block */)a0;
- (long long)accountLevelSwitchDisabledReason;
- (BOOL)isPersonalizedAdsScreenTimeRestricted;
- (id)appTrackingServiceProxy:(id)a0;
- (BOOL)_userAllowedToChangeSettings;
- (id)appTrackingXPCConnection:(id /* block */)a0 withInvalidation:(id /* block */)a1;
- (BOOL)_isUserEDURestricted;
- (BOOL)_isUserProtoTeenState;
- (long long)accountRestrictionReason;
- (BOOL)shouldDisplayPAUI;

@end

@class NSString, NSArray, NSURL, ADFCapSettings, ADClientSettingsResponse;

@interface ADSearchAdsSettings : ADSingleton

@property (retain, nonatomic) ADClientSettingsResponse *clientSettings;
@property (retain, nonatomic) NSURL *defaultToroServerURL;
@property (retain, nonatomic) NSURL *defaultAdTargetingServerURL;
@property (retain, nonatomic) NSString *algoID;
@property (retain) NSArray *userKeyboards;
@property (nonatomic) double requestedLocationAccuracy;
@property (nonatomic) double locationGridSpacing;
@property (nonatomic) char isTest;
@property (nonatomic) char isBaseline;
@property (nonatomic) char isCustomTemplate;
@property (nonatomic) char isRequestedImage;
@property (nonatomic) char isRequestedRating;
@property (retain, nonatomic) NSString *requestedText;
@property (retain, nonatomic) NSString *requestedIcon;
@property (retain, nonatomic) NSString *templateType;
@property (retain, nonatomic) ADFCapSettings *searchSettings;
@property (retain, nonatomic) ADFCapSettings *landingPageSettings;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)refresh;
- (id)_fCapParametersFromType:(long long)a0;
- (id)_fCapSettingsFromType:(long long)a0;
- (id)_getParametersForName:(id)a0;
- (void)applyClientSettings;
- (void)checkDefaultsAndSetInternalSettingsOverrides;
- (double)clientSettingsExpirationDate;
- (void)expireClientSettings;
- (void)refreshClientSettings:(id /* block */)a0;
- (void)restoreClientSettings;

@end

@class NSString, NSNumber, WLKSystemPreferencesStore;

@interface VUISettingsManager : NSObject

@property (readonly, nonatomic) NSString *restrictions;
@property (copy, nonatomic) NSString *preferredVideoFormat;
@property (nonatomic) BOOL upNextLockupsUseCoverArt;
@property (nonatomic) BOOL automaticDownloadsEnabled;
@property (retain, nonatomic) NSNumber *isRTL;
@property (retain, nonatomic) WLKSystemPreferencesStore *preferencesStore;
@property (copy, nonatomic) NSNumber *maxMovieRank;
@property (copy, nonatomic) NSNumber *maxTVShowRank;
@property (copy, nonatomic) NSNumber *maxAppRank;
@property (nonatomic) long long appAppearance;

+ (id)sharedInstance;
+ (unsigned long long)_wlkTypeFromVUIPostPlayType:(unsigned long long)a0;
+ (BOOL)isPostPlayAutoPlayEnabledForType:(unsigned long long)a0;

- (id)_isRTL;
- (id)_init;
- (void)dealloc;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)_handlePreferencesChange:(id)a0;
- (void)_setupNotificationObservers;
- (BOOL)_hasPreferredVideoFormatChanged;
- (BOOL)_hasAppAppearanceSettingChanged;
- (long long)_appAppearance;
- (BOOL)_automaticDownloadsEnabled;
- (id)_formatStringForVideoFormat:(unsigned long long)a0;
- (BOOL)_hasAutomaticDownloadsSettingChanged;
- (BOOL)_hasRTLChanged;
- (BOOL)_hasRestrictionsChanged;
- (BOOL)_hasUpNextLockupsUseCoverArtChanged;
- (unsigned long long)_preferredVideoFormat;
- (id)_restrictionsMaximumEffectiveAppRanking;
- (id)_restrictionsMaximumEffectiveMovieRanking;
- (id)_restrictionsMaximumEffectiveTVShowRanking;
- (void)_sendSettingsValuesToJS:(id /* block */)a0;
- (void)_teardownNotificationObservers;
- (BOOL)_upNextLockupsUseCoverArt;
- (void)checkAndUpdateSettings;
- (void)createSettingsStore;
- (id)preferencesJSONData;

@end

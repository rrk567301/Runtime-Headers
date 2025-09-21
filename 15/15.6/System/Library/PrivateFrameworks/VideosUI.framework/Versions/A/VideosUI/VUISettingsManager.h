@class NSString, NSNumber, WLKSystemPreferencesStore;

@interface VUISettingsManager : NSObject

@property (readonly, nonatomic) NSString *restrictions;
@property (copy, nonatomic) NSString *preferredVideoFormat;
@property (nonatomic) char upNextLockupsUseCoverArt;
@property (retain, nonatomic) NSNumber *isRTL;
@property (retain, nonatomic) WLKSystemPreferencesStore *preferencesStore;
@property (copy, nonatomic) NSNumber *maxMovieRank;
@property (copy, nonatomic) NSNumber *maxTVShowRank;

+ (id)sharedInstance;
+ (unsigned long long)_wlkTypeFromVUIPostPlayType:(unsigned long long)a0;
+ (char)isPostPlayAutoPlayEnabledForType:(unsigned long long)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)_isRTL;
- (void)_handlePreferencesChange:(id)a0;
- (void)_setupNotificationObservers;
- (char)_hasPreferredVideoFormatChanged;
- (id)_formatStringForVideoFormat:(unsigned long long)a0;
- (char)_hasRTLChanged;
- (char)_hasRestrictionsChanged;
- (char)_hasUpNextLockupsUseCoverArtChanged;
- (unsigned long long)_preferredVideoFormat;
- (id)_restrictionsMaximumEffectiveMovieRanking;
- (id)_restrictionsMaximumEffectiveTVShowRanking;
- (void)_sendSettingsValuesToJS:(id /* block */)a0;
- (void)_teardownNotificationObservers;
- (char)_upNextLockupsUseCoverArt;
- (void)checkAndUpdateSettings;
- (void)createSettingsStore;
- (id)preferencesJSONData;

@end

@class NSString, WLKSettingsStore, NSNumber;

@interface VUISettingsManager : NSObject

@property (readonly, nonatomic) NSString *restrictions;
@property (copy, nonatomic) NSString *preferredVideoFormat;
@property (nonatomic) BOOL upNextLockupsUseCoverArt;
@property (retain, nonatomic) WLKSettingsStore *settingsStore;
@property (copy, nonatomic) NSNumber *maxMovieRank;
@property (copy, nonatomic) NSNumber *maxTVShowRank;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (unsigned long long)_preferredVideoFormat;
- (void)_handlePreferencesChange:(id)a0;
- (BOOL)_hasPreferredVideoFormatChanged;
- (id)_formatStringForVideoFormat:(unsigned long long)a0;
- (BOOL)_hasRestrictionsChanged;
- (BOOL)_hasUpNextLockupsUseCoverArtChanged;
- (id)_restrictionsMaximumEffectiveMovieRanking;
- (id)_restrictionsMaximumEffectiveTVShowRanking;
- (void)_sendSettingsValuesToJS:(id /* block */)a0;
- (BOOL)_upNextLockupsUseCoverArt;
- (void)checkAndUpdateSettings;
- (id)preferencesJSONData;

@end

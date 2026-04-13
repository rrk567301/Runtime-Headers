@class NSString, NSNumber;

@interface VUISettingsManager : NSObject

@property (readonly, nonatomic) NSString *restrictions;
@property (copy, nonatomic) NSString *preferredVideoFormat;
@property (copy, nonatomic) NSNumber *maxMovieRank;
@property (copy, nonatomic) NSNumber *maxTVShowRank;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (unsigned long long)_preferredVideoFormat;
- (void)_handlePreferencesChange:(id)a0;
- (id)_restrictionsMaximumEffectiveMovieRanking;
- (id)_restrictionsMaximumEffectiveTVShowRanking;
- (id)_formatStringForVideoFormat:(unsigned long long)a0;
- (BOOL)_hasRestrictionsChanged;
- (BOOL)_hasPreferredVideoFormatChanged;
- (void)_sendSettingsValuesToJS;
- (id)preferencesJSONData;
- (void)checkAndUpdateSettings;

@end

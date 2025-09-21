@class NSDate;

@interface MTAdvancedPlaybackSettings : NSManagedObject

@property (nonatomic) int settingsAdjustedCount;
@property (retain, nonatomic) NSDate *tipLastShownDate;
@property (nonatomic) BOOL hasCustomSettings;
@property (nonatomic) BOOL enhanceDialogueEnabled;
@property (nonatomic) double playbackRate;

+ (BOOL)defaultEnhanceDialogueEnabled;
+ (id)insertNewAdvancedPlaybackSettingsOnPodcast:(id)a0 hasCustomSettings:(BOOL)a1 playbackRate:(double)a2 enhanceDialogueEnabled:(BOOL)a3;
+ (id)insertNewAdvancedPlaybackSettingsOnPodcast:(id)a0 settingsAdjustedCount:(int)a1;
+ (id)insertNewAdvancedPlaybackSettingsOnPodcast:(id)a0 settingsAdjustedCount:(int)a1 tipLastShownDate:(id)a2;
+ (id)insertNewAdvancedPlaybackSettingsOnPodcast:(id)a0 settingsAdjustedCount:(int)a1 tipLastShownDate:(id)a2 hasCustomSettings:(BOOL)a3 playbackRate:(double)a4 enhanceDialogueEnabled:(BOOL)a5;

@end

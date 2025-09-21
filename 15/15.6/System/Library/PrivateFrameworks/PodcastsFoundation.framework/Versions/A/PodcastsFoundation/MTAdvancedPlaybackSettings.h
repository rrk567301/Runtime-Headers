@interface MTAdvancedPlaybackSettings : NSManagedObject

@property (nonatomic) int playbackSettingsAdjustedCount;
@property (nonatomic) double tipLastShownDate;
@property (nonatomic) char hasCustomSettings;
@property (nonatomic) double playbackRate;

+ (id)insertNewAdvancedPlaybackSettingsOnPodcast:(id)a0 playbackSettingsAdjustedCount:(int)a1;
+ (id)insertNewAdvancedPlaybackSettingsOnPodcast:(id)a0 playbackSettingsAdjustedCount:(int)a1 tipLastShownDate:(double)a2;

@end

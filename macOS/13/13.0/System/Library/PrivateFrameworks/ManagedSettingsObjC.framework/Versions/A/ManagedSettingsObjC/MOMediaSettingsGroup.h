@class MOIntegerSettingMetadata, NSNumber, MOBoolSettingMetadata;

@interface MOMediaSettingsGroup : MOSettingsGroup

@property (class, readonly, retain, nonatomic) MOBoolSettingMetadata *denyBookstoreEroticaMetadata;
@property (class, readonly, retain, nonatomic) MOBoolSettingMetadata *denyExplicitContentMetadata;
@property (class, readonly, retain, nonatomic) MOBoolSettingMetadata *denyMusicServiceMetadata;
@property (class, readonly, retain, nonatomic) MOIntegerSettingMetadata *maximumMovieRatingMetadata;
@property (class, readonly, retain, nonatomic) MOIntegerSettingMetadata *maximumTVShowRatingMetadata;

@property (retain, nonatomic) NSNumber *denyBookstoreErotica;
@property (retain, nonatomic) NSNumber *denyExplicitContent;
@property (retain, nonatomic) NSNumber *denyMusicService;
@property (retain, nonatomic) NSNumber *maximumMovieRating;
@property (retain, nonatomic) NSNumber *maximumTVShowRating;

+ (id)groupName;

@end

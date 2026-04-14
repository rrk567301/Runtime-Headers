@class MPModelTVEpisode, MPModelMovie, MPModelPlaylist, MPModelSocialPerson, MPArtworkCatalog, MPModelSong;

@interface MPModelPlaylistEntry : MPModelObject

@property (retain, nonatomic) MPModelPlaylist *playlist;
@property (nonatomic) long long position;
@property (retain, nonatomic) MPModelSong *song;
@property (retain, nonatomic) MPModelTVEpisode *tvEpisode;
@property (retain, nonatomic) MPModelMovie *movie;
@property (retain, nonatomic) MPModelSocialPerson *socialContributor;
@property (retain, nonatomic) MPArtworkCatalog *_artworkCatalog;

+ (id)__playlist_KEY;
+ (id)kindWithKinds:(id)a0;
+ (id)__song_KEY;
+ (id)__tvEpisode_KEY;
+ (id)__movie_KEY;
+ (long long)genericObjectType;
+ (id)requiredStoreLibraryPersonalizationProperties;
+ (id)__position_KEY;
+ (id)__socialContributor_KEY;
+ (id)___artworkCatalog_KEY;

- (long long)type;
- (id)anyObject;
- (id)humanDescription;
- (id)mediaItemPropertyValues;
- (id)relativeModelObjectForStoreLibraryPersonalization;
- (id)personalizationScopedPropertiesForProperties:(id)a0;
- (id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)a0;

@end

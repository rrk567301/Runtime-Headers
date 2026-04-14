@class MPModelTVEpisode, MPModelMovie, MPModelPlaylist, MPModelSocialPerson, MPArtworkCatalog, MPModelSong;

@interface MPModelPlaylistEntry : MPModelObject

@property (retain, nonatomic) MPModelPlaylist *playlist;
@property (nonatomic) long long position;
@property (retain, nonatomic) MPModelSong *song;
@property (retain, nonatomic) MPModelTVEpisode *tvEpisode;
@property (retain, nonatomic) MPModelMovie *movie;
@property (retain, nonatomic) MPModelSocialPerson *socialContributor;
@property (retain, nonatomic) MPArtworkCatalog *_artworkCatalog;

+ (id)__tvEpisode_KEY;
+ (id)___artworkCatalog_KEY;
+ (id)__movie_KEY;
+ (id)__playlist_KEY;
+ (id)__position_KEY;
+ (id)__socialContributor_KEY;
+ (id)__song_KEY;
+ (long long)genericObjectType;
+ (id)kindWithKinds:(id)a0;
+ (id)requiredStoreLibraryPersonalizationProperties;

- (id)anyObject;
- (long long)type;
- (id)humanDescription;
- (id)mediaItemPropertyValues;
- (id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)a0;
- (id)personalizationScopedPropertiesForProperties:(id)a0;
- (id)relativeModelObjectForStoreLibraryPersonalization;

@end

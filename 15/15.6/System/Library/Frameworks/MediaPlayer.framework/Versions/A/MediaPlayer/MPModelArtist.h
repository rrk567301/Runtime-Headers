@class MPModelGenre, NSDate;

@interface MPModelArtist : MPModelPerson

@property (nonatomic) char hasBiography;
@property (nonatomic) long long songCount;
@property (nonatomic) long long albumCount;
@property (copy, nonatomic) MPModelGenre *genre;
@property (copy, nonatomic) id /* block */ artworkCatalogBlock;
@property (copy, nonatomic) id /* block */ editorialArtworkCatalogBlock;
@property (copy, nonatomic) NSDate *libraryAddedDate;
@property (nonatomic, getter=isClassicalExperienceAvailable) char classicalExperienceAvailable;
@property (nonatomic) char isFavorite;
@property (nonatomic) char isDisliked;
@property (nonatomic, getter=isLibraryAdded) char libraryAdded;
@property (copy, nonatomic) NSDate *dateFavorited;

+ (id)__songCount_KEY;
+ (void)__MPModelPropertyArtistAlbumCount__MAPPING_MISSING__;
+ (void)__MPModelPropertyArtistArtwork__MAPPING_MISSING__;
+ (void)__MPModelPropertyArtistClassicalExperienceAvailable__MAPPING_MISSING__;
+ (void)__MPModelPropertyArtistDateFavorited__MAPPING_MISSING__;
+ (void)__MPModelPropertyArtistEditorialArtwork__MAPPING_MISSING__;
+ (void)__MPModelPropertyArtistHasBiography__MAPPING_MISSING__;
+ (void)__MPModelPropertyArtistIsDisliked__MAPPING_MISSING__;
+ (void)__MPModelPropertyArtistIsFavorite__MAPPING_MISSING__;
+ (void)__MPModelPropertyArtistLibraryAddedDate__MAPPING_MISSING__;
+ (void)__MPModelPropertyArtistLibraryAdded__MAPPING_MISSING__;
+ (void)__MPModelPropertyArtistSongCount__MAPPING_MISSING__;
+ (void)__MPModelRelationshipArtistGenre__MAPPING_MISSING__;
+ (id)__albumCount_KEY;
+ (id)__artworkCatalogBlock_KEY;
+ (id)__classicalExperienceAvailable_KEY;
+ (id)__dateFavorited_KEY;
+ (id)__editorialArtworkCatalogBlock_KEY;
+ (id)__genre_KEY;
+ (id)__hasBiography_KEY;
+ (id)__isDisliked_KEY;
+ (id)__isFavorite_KEY;
+ (id)__libraryAddedDate_KEY;
+ (id)__libraryAdded_KEY;
+ (long long)genericObjectType;
+ (id)kindWithAlbumKind:(id)a0;
+ (id)requiredStoreLibraryPersonalizationProperties;

- (id)artworkCatalog;
- (id)editorialArtworkCatalog;
- (id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)a0;
- (id)personalizationScopedPropertiesForProperties:(id)a0;
- (id)relativeModelObjectForStoreLibraryPersonalization;

@end

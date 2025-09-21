@class PBUnknownFields;

@interface GEOLogMsgStateMapsFeatures : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    int _favoritesCount;
    int _followedPublisherCount;
    int _libraryFavoritesGuideSavedPlacesCount;
    int _libraryGuidesSavedPlacesCount;
    int _libraryPlacesWithNoteCount;
    int _librarySavedPlacesCount;
    int _personalCollectionsCount;
    int _savedCollectionsCount;
    int _submittedPhotosCount;
    int _submittedRatingsCount;
    char _homeFavoriteSet;
    char _schoolFavoriteSet;
    char _transitFavoriteSet;
    char _workFavoriteSet;
    struct { unsigned char has_favoritesCount : 1; unsigned char has_followedPublisherCount : 1; unsigned char has_libraryFavoritesGuideSavedPlacesCount : 1; unsigned char has_libraryGuidesSavedPlacesCount : 1; unsigned char has_libraryPlacesWithNoteCount : 1; unsigned char has_librarySavedPlacesCount : 1; unsigned char has_personalCollectionsCount : 1; unsigned char has_savedCollectionsCount : 1; unsigned char has_submittedPhotosCount : 1; unsigned char has_submittedRatingsCount : 1; unsigned char has_homeFavoriteSet : 1; unsigned char has_schoolFavoriteSet : 1; unsigned char has_transitFavoriteSet : 1; unsigned char has_workFavoriteSet : 1; } _flags;
}

@property (nonatomic) char hasHomeFavoriteSet;
@property (nonatomic) char homeFavoriteSet;
@property (nonatomic) char hasWorkFavoriteSet;
@property (nonatomic) char workFavoriteSet;
@property (nonatomic) char hasSchoolFavoriteSet;
@property (nonatomic) char schoolFavoriteSet;
@property (nonatomic) char hasFavoritesCount;
@property (nonatomic) int favoritesCount;
@property (nonatomic) char hasPersonalCollectionsCount;
@property (nonatomic) int personalCollectionsCount;
@property (nonatomic) char hasSavedCollectionsCount;
@property (nonatomic) int savedCollectionsCount;
@property (nonatomic) char hasFollowedPublisherCount;
@property (nonatomic) int followedPublisherCount;
@property (nonatomic) char hasSubmittedRatingsCount;
@property (nonatomic) int submittedRatingsCount;
@property (nonatomic) char hasSubmittedPhotosCount;
@property (nonatomic) int submittedPhotosCount;
@property (nonatomic) char hasTransitFavoriteSet;
@property (nonatomic) char transitFavoriteSet;
@property (nonatomic) char hasLibrarySavedPlacesCount;
@property (nonatomic) int librarySavedPlacesCount;
@property (nonatomic) char hasLibraryPlacesWithNoteCount;
@property (nonatomic) int libraryPlacesWithNoteCount;
@property (nonatomic) char hasLibraryGuidesSavedPlacesCount;
@property (nonatomic) int libraryGuidesSavedPlacesCount;
@property (nonatomic) char hasLibraryFavoritesGuideSavedPlacesCount;
@property (nonatomic) int libraryFavoritesGuideSavedPlacesCount;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end

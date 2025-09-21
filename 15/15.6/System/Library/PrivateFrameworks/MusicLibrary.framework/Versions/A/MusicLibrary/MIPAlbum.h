@class NSString, MIPArtist, NSMutableArray;

@interface MIPAlbum : PBCodable <NSCopying> {
    struct { unsigned char likedStateChangedDate : 1; unsigned char persistentId : 1; unsigned char storeId : 1; unsigned char likedState : 1; unsigned char numDiscs : 1; unsigned char numTracks : 1; unsigned char userRating : 1; unsigned char compilation : 1; } _has;
}

@property (nonatomic) char hasStoreId;
@property (nonatomic) long long storeId;
@property (readonly, nonatomic) char hasName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) char hasSortName;
@property (retain, nonatomic) NSString *sortName;
@property (readonly, nonatomic) char hasArtist;
@property (retain, nonatomic) MIPArtist *artist;
@property (nonatomic) char hasNumTracks;
@property (nonatomic) int numTracks;
@property (nonatomic) char hasNumDiscs;
@property (nonatomic) int numDiscs;
@property (readonly, nonatomic) char hasArtworkId;
@property (retain, nonatomic) NSString *artworkId;
@property (nonatomic) char hasUserRating;
@property (nonatomic) int userRating;
@property (nonatomic) char hasCompilation;
@property (nonatomic) char compilation;
@property (nonatomic) char hasPersistentId;
@property (nonatomic) long long persistentId;
@property (readonly, nonatomic) char hasCloudId;
@property (retain, nonatomic) NSString *cloudId;
@property (nonatomic) char hasLikedState;
@property (nonatomic) int likedState;
@property (nonatomic) char hasLikedStateChangedDate;
@property (nonatomic) long long likedStateChangedDate;
@property (retain, nonatomic) NSMutableArray *libraryIdentifiers;

+ (Class)libraryIdentifiersType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearLibraryIdentifiers;
- (void)addLibraryIdentifiers:(id)a0;
- (id)libraryIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)libraryIdentifiersCount;

@end

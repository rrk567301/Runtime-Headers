@class NSString, NSMutableArray;

@interface MIPArtist : PBCodable <NSCopying> {
    struct { unsigned char likedStateChangedDate : 1; unsigned char persistentId : 1; unsigned char sortOrder : 1; unsigned char sortOrderSection : 1; unsigned char storeId : 1; unsigned char likedState : 1; } _has;
}

@property (nonatomic) char hasStoreId;
@property (nonatomic) long long storeId;
@property (readonly, nonatomic) char hasName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) char hasSortName;
@property (retain, nonatomic) NSString *sortName;
@property (readonly, nonatomic) char hasArtworkId;
@property (retain, nonatomic) NSString *artworkId;
@property (nonatomic) char hasPersistentId;
@property (nonatomic) long long persistentId;
@property (readonly, nonatomic) char hasCloudUniversalLibraryId;
@property (retain, nonatomic) NSString *cloudUniversalLibraryId;
@property (nonatomic) char hasLikedState;
@property (nonatomic) int likedState;
@property (nonatomic) char hasLikedStateChangedDate;
@property (nonatomic) long long likedStateChangedDate;
@property (nonatomic) char hasSortOrder;
@property (nonatomic) long long sortOrder;
@property (nonatomic) char hasSortOrderSection;
@property (nonatomic) long long sortOrderSection;
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

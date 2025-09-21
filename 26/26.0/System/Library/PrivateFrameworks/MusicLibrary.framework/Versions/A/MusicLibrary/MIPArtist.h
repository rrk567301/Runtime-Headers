@class NSString, NSMutableArray;

@interface MIPArtist : PBCodable <NSCopying> {
    struct { unsigned char likedStateChangedDate : 1; unsigned char persistentId : 1; unsigned char sortOrder : 1; unsigned char sortOrderSection : 1; unsigned char storeId : 1; unsigned char likedState : 1; } _has;
}

@property (nonatomic) BOOL hasStoreId;
@property (nonatomic) long long storeId;
@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL hasSortName;
@property (retain, nonatomic) NSString *sortName;
@property (readonly, nonatomic) BOOL hasArtworkId;
@property (retain, nonatomic) NSString *artworkId;
@property (nonatomic) BOOL hasPersistentId;
@property (nonatomic) long long persistentId;
@property (readonly, nonatomic) BOOL hasCloudUniversalLibraryId;
@property (retain, nonatomic) NSString *cloudUniversalLibraryId;
@property (nonatomic) BOOL hasLikedState;
@property (nonatomic) int likedState;
@property (nonatomic) BOOL hasLikedStateChangedDate;
@property (nonatomic) long long likedStateChangedDate;
@property (nonatomic) BOOL hasSortOrder;
@property (nonatomic) long long sortOrder;
@property (nonatomic) BOOL hasSortOrderSection;
@property (nonatomic) long long sortOrderSection;
@property (retain, nonatomic) NSMutableArray *libraryIdentifiers;

+ (Class)libraryIdentifiersType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)clearLibraryIdentifiers;
- (void)addLibraryIdentifiers:(id)a0;
- (id)libraryIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)libraryIdentifiersCount;

@end

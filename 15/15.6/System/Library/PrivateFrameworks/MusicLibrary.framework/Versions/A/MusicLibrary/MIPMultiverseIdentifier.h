@class NSString, NSMutableArray;

@interface MIPMultiverseIdentifier : PBCodable <NSCopying> {
    struct { unsigned char accountId : 1; unsigned char purchaseHistoryId : 1; unsigned char sagaId : 1; unsigned char storeId : 1; unsigned char mediaObjectType : 1; unsigned char mediaType : 1; } _has;
}

@property (nonatomic) char hasMediaObjectType;
@property (nonatomic) int mediaObjectType;
@property (nonatomic) char hasMediaType;
@property (nonatomic) int mediaType;
@property (readonly, nonatomic) char hasName;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) char hasAccountId;
@property (nonatomic) long long accountId;
@property (nonatomic) char hasStoreId;
@property (nonatomic) long long storeId;
@property (nonatomic) char hasSagaId;
@property (nonatomic) long long sagaId;
@property (nonatomic) char hasPurchaseHistoryId;
@property (nonatomic) long long purchaseHistoryId;
@property (readonly, nonatomic) char hasCloudUniversalLibraryId;
@property (retain, nonatomic) NSString *cloudUniversalLibraryId;
@property (readonly, nonatomic) char hasCloudLibraryId;
@property (retain, nonatomic) NSString *cloudLibraryId;
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
- (int)StringAsMediaType:(id)a0;
- (id)mediaTypeAsString:(int)a0;
- (void)clearLibraryIdentifiers;
- (int)StringAsMediaObjectType:(id)a0;
- (void)addLibraryIdentifiers:(id)a0;
- (id)libraryIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)libraryIdentifiersCount;
- (id)mediaObjectTypeAsString:(int)a0;

@end

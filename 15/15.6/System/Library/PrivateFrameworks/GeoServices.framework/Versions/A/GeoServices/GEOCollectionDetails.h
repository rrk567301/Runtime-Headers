@class NSString, PBDataReader, PBUnknownFields;

@interface GEOCollectionDetails : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _collectionIds;
    NSString *_collectionCategory;
    unsigned long long _targetId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    char _currentlySaved;
    struct { unsigned char has_targetId : 1; unsigned char has_currentlySaved : 1; unsigned char read_unknownFields : 1; unsigned char read_collectionIds : 1; unsigned char read_collectionCategory : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) unsigned long long collectionIdsCount;
@property (readonly, nonatomic) unsigned long long *collectionIds;
@property (readonly, nonatomic) char hasCollectionCategory;
@property (retain, nonatomic) NSString *collectionCategory;
@property (nonatomic) char hasTargetId;
@property (nonatomic) unsigned long long targetId;
@property (nonatomic) char hasCurrentlySaved;
@property (nonatomic) char currentlySaved;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addCollectionId:(unsigned long long)a0;
- (void)clearCollectionIds;
- (void)clearUnknownFields:(char)a0;
- (unsigned long long)collectionIdAtIndex:(unsigned long long)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (void)setCollectionIds:(unsigned long long *)a0 count:(unsigned long long)a1;

@end

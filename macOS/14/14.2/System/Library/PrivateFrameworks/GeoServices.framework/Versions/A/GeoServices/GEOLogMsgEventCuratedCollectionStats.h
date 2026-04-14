@interface GEOLogMsgEventCuratedCollectionStats : PBCodable <NSCopying> {
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _savedCollectionMuids;
}

@property (readonly, nonatomic) unsigned long long savedCollectionMuidsCount;
@property (readonly, nonatomic) unsigned long long *savedCollectionMuids;

+ (BOOL)isValid:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addSavedCollectionMuids:(unsigned long long)a0;
- (void)clearSavedCollectionMuids;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (unsigned long long)savedCollectionMuidsAtIndex:(unsigned long long)a0;
- (void)setSavedCollectionMuids:(unsigned long long *)a0 count:(unsigned long long)a1;

@end

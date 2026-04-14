@class PBUnknownFields;

@interface GEOLogMsgEventCuratedCollectionStats : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _savedCollectionMuids;
}

@property (readonly, nonatomic) unsigned long long savedCollectionMuidsCount;
@property (readonly, nonatomic) unsigned long long *savedCollectionMuids;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;
- (void)dealloc;
- (id)initWithJSON:(id)a0;
- (void)addSavedCollectionMuids:(unsigned long long)a0;
- (void)clearSavedCollectionMuids;
- (unsigned long long)savedCollectionMuidsAtIndex:(unsigned long long)a0;
- (void)setSavedCollectionMuids:(unsigned long long *)a0 count:(unsigned long long)a1;

@end

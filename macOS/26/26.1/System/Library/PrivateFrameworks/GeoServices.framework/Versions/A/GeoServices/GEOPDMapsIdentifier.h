@class GEOPDShardedId, PBUnknownFields;

@interface GEOPDMapsIdentifier : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOPDShardedId *_shardedId;
}

@property (readonly, nonatomic) BOOL hasShardedId;
@property (retain, nonatomic) GEOPDShardedId *shardedId;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithJSON:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)jsonRepresentation;
- (BOOL)isValidMapsIdentifier;
- (id)description;
- (void)readAll:(BOOL)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isValidOfflineMapsIdentifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (void)writeTo:(id)a0;

@end

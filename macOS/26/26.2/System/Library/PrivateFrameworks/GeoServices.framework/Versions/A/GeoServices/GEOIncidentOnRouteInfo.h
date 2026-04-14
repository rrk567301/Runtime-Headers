@class NSMutableArray, PBUnknownFields;

@interface GEOIncidentOnRouteInfo : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_indexAndOffsets;
}

@property (retain, nonatomic) NSMutableArray *indexAndOffsets;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)indexAndOffsetType;

- (id)initWithJSON:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)readAll:(BOOL)a0;
- (void)addIndexAndOffset:(id)a0;
- (void)clearIndexAndOffsets;
- (id)indexAndOffsetAtIndex:(unsigned long long)a0;
- (unsigned long long)indexAndOffsetsCount;

@end

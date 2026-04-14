@class NSMutableArray, PBUnknownFields;

@interface GEOTrafficColorInfo : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_trafficColorAndOffsets;
}

@property (retain, nonatomic) NSMutableArray *trafficColorAndOffsets;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)trafficColorAndOffsetType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (void)addTrafficColorAndOffset:(id)a0;
- (unsigned long long)trafficColorAndOffsetsCount;
- (void)clearTrafficColorAndOffsets;
- (id)trafficColorAndOffsetAtIndex:(unsigned long long)a0;

@end

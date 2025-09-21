@class NSMutableArray, PBUnknownFields;

@interface GEOTrafficColorInfo : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_trafficColorAndOffsets;
}

@property (retain, nonatomic) NSMutableArray *trafficColorAndOffsets;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;
+ (Class)trafficColorAndOffsetType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addTrafficColorAndOffset:(id)a0;
- (void)clearTrafficColorAndOffsets;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (id)trafficColorAndOffsetAtIndex:(unsigned long long)a0;
- (unsigned long long)trafficColorAndOffsetsCount;

@end

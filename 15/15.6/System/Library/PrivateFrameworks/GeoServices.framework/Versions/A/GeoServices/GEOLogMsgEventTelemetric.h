@class NSMutableArray, PBUnknownFields;

@interface GEOLogMsgEventTelemetric : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_telemetricEntitys;
}

@property (retain, nonatomic) NSMutableArray *telemetricEntitys;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;
+ (Class)telemetricEntityType;

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
- (void)addTelemetricEntity:(id)a0;
- (void)clearTelemetricEntitys;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (id)telemetricEntityAtIndex:(unsigned long long)a0;
- (unsigned long long)telemetricEntitysCount;

@end

@class NSMutableArray, PBUnknownFields;

@interface GEOLogMsgEventTelemetric : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_telemetricEntitys;
}

@property (retain, nonatomic) NSMutableArray *telemetricEntitys;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)telemetricEntityType;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)addTelemetricEntity:(id)a0;
- (void)clearTelemetricEntitys;
- (id)telemetricEntityAtIndex:(unsigned long long)a0;
- (unsigned long long)telemetricEntitysCount;

@end

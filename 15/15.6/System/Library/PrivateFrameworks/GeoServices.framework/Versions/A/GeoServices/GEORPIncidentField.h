@class NSString;

@interface GEORPIncidentField : PBCodable <NSCopying> {
    NSString *_siriType;
    int _trafficType;
    char _displayIncidentOnMap;
    struct { unsigned char has_trafficType : 1; unsigned char has_displayIncidentOnMap : 1; } _flags;
}

@property (readonly, nonatomic) char hasSiriType;
@property (retain, nonatomic) NSString *siriType;
@property (nonatomic) char hasTrafficType;
@property (nonatomic) int trafficType;
@property (nonatomic) char hasDisplayIncidentOnMap;
@property (nonatomic) char displayIncidentOnMap;

+ (char)isValid:(id)a0;

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
- (int)StringAsTrafficType:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (id)trafficTypeAsString:(int)a0;

@end

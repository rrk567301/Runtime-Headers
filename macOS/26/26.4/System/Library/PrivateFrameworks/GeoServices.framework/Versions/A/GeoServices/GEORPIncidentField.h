@class NSString;

@interface GEORPIncidentField : PBCodable <NSCopying> {
    NSString *_siriType;
    int _trafficType;
    BOOL _displayIncidentOnMap;
    struct { unsigned char has_trafficType : 1; unsigned char has_displayIncidentOnMap : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasSiriType;
@property (retain, nonatomic) NSString *siriType;
@property (nonatomic) BOOL hasTrafficType;
@property (nonatomic) int trafficType;
@property (nonatomic) BOOL hasDisplayIncidentOnMap;
@property (nonatomic) BOOL displayIncidentOnMap;

+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)trafficTypeAsString:(int)a0;
- (id)initWithDictionary:(id)a0;
- (int)StringAsTrafficType:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;
- (id)initWithJSON:(id)a0;

@end

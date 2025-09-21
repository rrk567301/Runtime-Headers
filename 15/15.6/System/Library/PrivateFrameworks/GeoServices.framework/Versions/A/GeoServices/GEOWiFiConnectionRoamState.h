@interface GEOWiFiConnectionRoamState : PBCodable <NSCopying> {
    int _lateRoamMaxRSSI;
    int _lateRoamMinRSSI;
    struct { unsigned char has_lateRoamMaxRSSI : 1; unsigned char has_lateRoamMinRSSI : 1; } _flags;
}

@property (nonatomic) char hasLateRoamMinRSSI;
@property (nonatomic) int lateRoamMinRSSI;
@property (nonatomic) char hasLateRoamMaxRSSI;
@property (nonatomic) int lateRoamMaxRSSI;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end

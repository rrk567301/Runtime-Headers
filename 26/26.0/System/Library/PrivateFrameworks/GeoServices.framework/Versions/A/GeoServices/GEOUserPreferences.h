@class NSMutableArray, PBUnknownFields;

@interface GEOUserPreferences : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_evChargingPreferences;
    BOOL _avoidHighways;
    BOOL _avoidTolls;
    struct { unsigned char has_avoidHighways : 1; unsigned char has_avoidTolls : 1; } _flags;
}

@property (nonatomic) BOOL hasAvoidTolls;
@property (nonatomic) BOOL avoidTolls;
@property (nonatomic) BOOL hasAvoidHighways;
@property (nonatomic) BOOL avoidHighways;
@property (retain, nonatomic) NSMutableArray *evChargingPreferences;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)evChargingPreferencesType;

- (id)initWithDictionary:(id)a0;
- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)clearEvChargingPreferences;
- (void)clearUnknownFields:(BOOL)a0;
- (void)addEvChargingPreferences:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (void)readAll:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)evChargingPreferencesCount;
- (id)evChargingPreferencesAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;

@end

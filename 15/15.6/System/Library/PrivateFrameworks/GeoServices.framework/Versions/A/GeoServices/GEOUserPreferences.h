@class NSMutableArray, PBUnknownFields;

@interface GEOUserPreferences : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_evChargingPreferences;
    char _avoidHighways;
    char _avoidTolls;
    struct { unsigned char has_avoidHighways : 1; unsigned char has_avoidTolls : 1; } _flags;
}

@property (nonatomic) char hasAvoidTolls;
@property (nonatomic) char avoidTolls;
@property (nonatomic) char hasAvoidHighways;
@property (nonatomic) char avoidHighways;
@property (retain, nonatomic) NSMutableArray *evChargingPreferences;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)evChargingPreferencesType;
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
- (void)addEvChargingPreferences:(id)a0;
- (void)clearEvChargingPreferences;
- (void)clearUnknownFields:(char)a0;
- (id)evChargingPreferencesAtIndex:(unsigned long long)a0;
- (unsigned long long)evChargingPreferencesCount;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end

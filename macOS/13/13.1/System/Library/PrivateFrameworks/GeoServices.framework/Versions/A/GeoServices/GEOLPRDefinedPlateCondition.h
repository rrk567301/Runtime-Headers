@class NSMutableArray, PBDataReader;

@interface GEOLPRDefinedPlateCondition : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_plateMatchConditions;
    NSMutableArray *_powerTypeKeys;
    NSMutableArray *_vehicleTypeKeys;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_plateMatchConditions : 1; unsigned char read_powerTypeKeys : 1; unsigned char read_vehicleTypeKeys : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *vehicleTypeKeys;
@property (retain, nonatomic) NSMutableArray *powerTypeKeys;
@property (retain, nonatomic) NSMutableArray *plateMatchConditions;

+ (BOOL)isValid:(id)a0;
+ (Class)vehicleTypeKeyType;
+ (Class)powerTypeKeyType;
+ (Class)plateMatchConditionType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)jsonRepresentation;
- (id)initWithJSON:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)clearVehicleTypeKeys;
- (void)addVehicleTypeKey:(id)a0;
- (unsigned long long)vehicleTypeKeysCount;
- (id)vehicleTypeKeyAtIndex:(unsigned long long)a0;
- (void)clearPowerTypeKeys;
- (void)addPowerTypeKey:(id)a0;
- (unsigned long long)powerTypeKeysCount;
- (id)powerTypeKeyAtIndex:(unsigned long long)a0;
- (void)clearPlateMatchConditions;
- (void)addPlateMatchCondition:(id)a0;
- (unsigned long long)plateMatchConditionsCount;
- (id)plateMatchConditionAtIndex:(unsigned long long)a0;

@end

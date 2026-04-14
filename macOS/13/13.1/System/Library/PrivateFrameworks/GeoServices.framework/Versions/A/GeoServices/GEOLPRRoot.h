@class PBDataReader, NSMutableArray, NSMutableDictionary;

@interface GEOLPRRoot : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableDictionary *_powerTypes;
    NSMutableArray *_regions;
    NSMutableDictionary *_vehicleTypes;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_powerTypes : 1; unsigned char read_regions : 1; unsigned char read_vehicleTypes : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *regions;
@property (retain, nonatomic) NSMutableDictionary *powerTypes;
@property (retain, nonatomic) NSMutableDictionary *vehicleTypes;

+ (BOOL)isValid:(id)a0;
+ (Class)regionsType;
+ (Class)powerTypesType;
+ (Class)vehicleTypesType;

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
- (void)clearRegions;
- (unsigned long long)regionsCount;
- (void)addRegions:(id)a0;
- (id)regionsAtIndex:(unsigned long long)a0;
- (void)clearPowerTypes;
- (void)setPowerTypesValue:(id)a0 forKey:(id)a1;
- (id)powerTypesForKey:(id)a0;
- (void)enumeratePowerTypesUsingBlock:(id /* block */)a0;
- (unsigned long long)powerTypesCount;
- (void)clearVehicleTypes;
- (void)setVehicleTypesValue:(id)a0 forKey:(id)a1;
- (id)vehicleTypesForKey:(id)a0;
- (void)enumerateVehicleTypesUsingBlock:(id /* block */)a0;
- (unsigned long long)vehicleTypesCount;

@end

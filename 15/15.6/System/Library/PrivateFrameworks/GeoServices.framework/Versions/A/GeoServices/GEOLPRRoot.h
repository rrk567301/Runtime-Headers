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

+ (char)isValid:(id)a0;
+ (Class)powerTypesType;
+ (Class)regionsType;
+ (Class)vehicleTypesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)regionsAtIndex:(unsigned long long)a0;
- (void)clearPowerTypes;
- (unsigned long long)powerTypesCount;
- (void)addRegions:(id)a0;
- (void)clearRegions;
- (void)clearVehicleTypes;
- (void)enumeratePowerTypesUsingBlock:(id /* block */)a0;
- (void)enumerateVehicleTypesUsingBlock:(id /* block */)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)powerTypesForKey:(id)a0;
- (void)readAll:(char)a0;
- (unsigned long long)regionsCount;
- (void)setPowerTypesValue:(id)a0 forKey:(id)a1;
- (void)setVehicleTypesValue:(id)a0 forKey:(id)a1;
- (unsigned long long)vehicleTypesCount;
- (id)vehicleTypesForKey:(id)a0;

@end

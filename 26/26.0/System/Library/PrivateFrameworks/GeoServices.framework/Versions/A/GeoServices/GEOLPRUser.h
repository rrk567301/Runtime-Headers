@class NSMutableDictionary;

@interface GEOLPRUser : PBCodable <NSCopying> {
    NSMutableDictionary *_vehicles;
}

@property (retain, nonatomic) NSMutableDictionary *vehicles;

+ (BOOL)isValid:(id)a0;
+ (Class)vehiclesType;

- (id)initWithDictionary:(id)a0;
- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (void)readAll:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)vehiclesForKey:(id)a0;
- (void)clearVehicles;
- (void)enumerateVehiclesUsingBlock:(id /* block */)a0;
- (void)setVehiclesValue:(id)a0 forKey:(id)a1;
- (unsigned long long)vehiclesCount;

@end

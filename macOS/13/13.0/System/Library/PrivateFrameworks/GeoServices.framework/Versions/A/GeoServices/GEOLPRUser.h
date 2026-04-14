@class NSMutableDictionary;

@interface GEOLPRUser : PBCodable <NSCopying> {
    NSMutableDictionary *_vehicles;
}

@property (retain, nonatomic) NSMutableDictionary *vehicles;

+ (BOOL)isValid:(id)a0;
+ (Class)vehiclesType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
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
- (void)clearVehicles;
- (void)setVehiclesValue:(id)a0 forKey:(id)a1;
- (id)vehiclesForKey:(id)a0;
- (void)enumerateVehiclesUsingBlock:(id /* block */)a0;
- (unsigned long long)vehiclesCount;

@end

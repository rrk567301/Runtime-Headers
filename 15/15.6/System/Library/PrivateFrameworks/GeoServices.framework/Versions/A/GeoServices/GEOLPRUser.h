@class NSMutableDictionary;

@interface GEOLPRUser : PBCodable <NSCopying> {
    NSMutableDictionary *_vehicles;
}

@property (retain, nonatomic) NSMutableDictionary *vehicles;

+ (char)isValid:(id)a0;
+ (Class)vehiclesType;

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
- (id)vehiclesForKey:(id)a0;
- (void)clearVehicles;
- (void)enumerateVehiclesUsingBlock:(id /* block */)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (void)setVehiclesValue:(id)a0 forKey:(id)a1;
- (unsigned long long)vehiclesCount;

@end

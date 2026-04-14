@class NSMutableArray;

@interface NTPBLocationRecommendationMappings : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *locationMappings;

+ (Class)locationMappingsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addLocationMappings:(id)a0;
- (void)clearLocationMappings;
- (unsigned long long)locationMappingsCount;
- (id)locationMappingsAtIndex:(unsigned long long)a0;

@end

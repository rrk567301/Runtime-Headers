@class NSMutableArray;

@interface NTPBLocationRecommendationMappings : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *locationMappings;

+ (Class)locationMappingsType;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)addLocationMappings:(id)a0;
- (void)clearLocationMappings;
- (id)locationMappingsAtIndex:(unsigned long long)a0;
- (unsigned long long)locationMappingsCount;

@end

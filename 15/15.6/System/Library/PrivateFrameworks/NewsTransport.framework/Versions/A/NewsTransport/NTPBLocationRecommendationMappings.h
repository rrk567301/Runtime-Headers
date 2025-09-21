@class NSMutableArray;

@interface NTPBLocationRecommendationMappings : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *locationMappings;

+ (Class)locationMappingsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addLocationMappings:(id)a0;
- (void)clearLocationMappings;
- (id)locationMappingsAtIndex:(unsigned long long)a0;
- (unsigned long long)locationMappingsCount;

@end

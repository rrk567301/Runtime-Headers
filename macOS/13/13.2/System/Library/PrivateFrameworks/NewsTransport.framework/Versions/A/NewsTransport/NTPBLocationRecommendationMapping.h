@class NSMutableArray;

@interface NTPBLocationRecommendationMapping : PBCodable <NSCopying> {
    struct { unsigned char latitude : 1; unsigned char longitude : 1; } _has;
}

@property (nonatomic) BOOL hasLatitude;
@property (nonatomic) double latitude;
@property (nonatomic) BOOL hasLongitude;
@property (nonatomic) double longitude;
@property (retain, nonatomic) NSMutableArray *recommendationProviders;

+ (Class)recommendationProvidersType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearRecommendationProviders;
- (void)addRecommendationProviders:(id)a0;
- (unsigned long long)recommendationProvidersCount;
- (id)recommendationProvidersAtIndex:(unsigned long long)a0;

@end

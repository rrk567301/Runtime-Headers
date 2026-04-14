@class NSString, NSMutableArray;

@interface NTPBRecommendationProvider : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasProviderId;
@property (retain, nonatomic) NSString *providerId;
@property (retain, nonatomic) NSMutableArray *tagRecommendations;

+ (Class)tagRecommendationsType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearTagRecommendations;
- (void)addTagRecommendations:(id)a0;
- (unsigned long long)tagRecommendationsCount;
- (id)tagRecommendationsAtIndex:(unsigned long long)a0;

@end

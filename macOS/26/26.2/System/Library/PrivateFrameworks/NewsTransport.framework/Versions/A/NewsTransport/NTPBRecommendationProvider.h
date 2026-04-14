@class NSString, NSMutableArray;

@interface NTPBRecommendationProvider : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasProviderId;
@property (retain, nonatomic) NSString *providerId;
@property (retain, nonatomic) NSMutableArray *tagRecommendations;

+ (Class)tagRecommendationsType;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)addTagRecommendations:(id)a0;
- (void)clearTagRecommendations;
- (id)tagRecommendationsAtIndex:(unsigned long long)a0;
- (unsigned long long)tagRecommendationsCount;

@end

@class NSMutableArray;

@interface NTPBTranslationMap : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *topicLanguageBuckets;
@property (retain, nonatomic) NSMutableArray *favoritesLanguageBuckets;

+ (Class)favoritesLanguageBucketsType;
+ (Class)topicLanguageBucketsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addFavoritesLanguageBuckets:(id)a0;
- (void)addTopicLanguageBuckets:(id)a0;
- (void)clearFavoritesLanguageBuckets;
- (void)clearTopicLanguageBuckets;
- (id)favoritesLanguageBucketsAtIndex:(unsigned long long)a0;
- (unsigned long long)favoritesLanguageBucketsCount;
- (id)topicLanguageBucketsAtIndex:(unsigned long long)a0;
- (unsigned long long)topicLanguageBucketsCount;

@end

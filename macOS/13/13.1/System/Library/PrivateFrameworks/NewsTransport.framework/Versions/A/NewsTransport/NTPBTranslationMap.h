@class NSMutableArray;

@interface NTPBTranslationMap : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *topicLanguageBuckets;
@property (retain, nonatomic) NSMutableArray *favoritesLanguageBuckets;

+ (Class)topicLanguageBucketsType;
+ (Class)favoritesLanguageBucketsType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearTopicLanguageBuckets;
- (void)addTopicLanguageBuckets:(id)a0;
- (unsigned long long)topicLanguageBucketsCount;
- (id)topicLanguageBucketsAtIndex:(unsigned long long)a0;
- (void)clearFavoritesLanguageBuckets;
- (void)addFavoritesLanguageBuckets:(id)a0;
- (unsigned long long)favoritesLanguageBucketsCount;
- (id)favoritesLanguageBucketsAtIndex:(unsigned long long)a0;

@end

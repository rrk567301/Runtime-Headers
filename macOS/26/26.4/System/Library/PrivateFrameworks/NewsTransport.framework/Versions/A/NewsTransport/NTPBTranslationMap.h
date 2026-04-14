@class NSMutableArray;

@interface NTPBTranslationMap : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *topicLanguageBuckets;
@property (retain, nonatomic) NSMutableArray *favoritesLanguageBuckets;

+ (Class)favoritesLanguageBucketsType;
+ (Class)topicLanguageBucketsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
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

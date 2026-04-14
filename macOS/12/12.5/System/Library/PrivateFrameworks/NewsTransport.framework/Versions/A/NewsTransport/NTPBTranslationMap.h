@class NSMutableArray;

@interface NTPBTranslationMap : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *topicLanguageBuckets;
@property (retain, nonatomic) NSMutableArray *favoritesLanguageBuckets;

+ (Class)topicLanguageBucketsType;
+ (Class)favoritesLanguageBucketsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addTopicLanguageBuckets:(id)a0;
- (void)addFavoritesLanguageBuckets:(id)a0;
- (void)clearTopicLanguageBuckets;
- (unsigned long long)topicLanguageBucketsCount;
- (id)topicLanguageBucketsAtIndex:(unsigned long long)a0;
- (void)clearFavoritesLanguageBuckets;
- (unsigned long long)favoritesLanguageBucketsCount;
- (id)favoritesLanguageBucketsAtIndex:(unsigned long long)a0;

@end

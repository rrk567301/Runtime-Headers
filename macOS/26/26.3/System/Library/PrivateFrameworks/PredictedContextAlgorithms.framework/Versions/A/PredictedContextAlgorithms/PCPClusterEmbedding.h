@class NSString, PCPClusterEmbeddingLocation, PCPClusterEmbeddingActivity, PCPClusterEmbeddingTime;

@interface PCPClusterEmbedding : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasActivityContext;
@property (retain, nonatomic) PCPClusterEmbeddingActivity *activityContext;
@property (readonly, nonatomic) BOOL hasLocationContext;
@property (retain, nonatomic) PCPClusterEmbeddingLocation *locationContext;
@property (readonly, nonatomic) BOOL hasTimeContext;
@property (retain, nonatomic) PCPClusterEmbeddingTime *timeContext;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithEmbedding:(id)a0;
- (void)mapLocationContext:(id)a0 toEmbedding:(id)a1;
- (void)mapActivityContext:(id)a0 toEmbedding:(id)a1;
- (void)mapTimeContext:(id)a0 toEmbedding:(id)a1;

@end

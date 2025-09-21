@class NSString, NSMutableArray, PCPClusterPhenotype;

@interface PCPWorkoutCluster : PBCodable <NSCopying> {
    struct { unsigned char endTimeCFAbsolute : 1; unsigned char startTimeCFAbsolute : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) BOOL hasStartTimeCFAbsolute;
@property (nonatomic) double startTimeCFAbsolute;
@property (nonatomic) BOOL hasEndTimeCFAbsolute;
@property (nonatomic) double endTimeCFAbsolute;
@property (retain, nonatomic) NSMutableArray *embeddingIdentifiersWithPhenotypes;
@property (retain, nonatomic) NSMutableArray *embeddingIdentifiers;
@property (readonly, nonatomic) BOOL hasClusterPhenotype;
@property (retain, nonatomic) PCPClusterPhenotype *clusterPhenotype;
@property (readonly, nonatomic) BOOL hasDominantSourceBundleIdentifier;
@property (retain, nonatomic) NSString *dominantSourceBundleIdentifier;

+ (Class)embeddingIdentifiersType;
+ (Class)embeddingIdentifiersWithPhenotypeType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCluster:(id)a0;
- (void)addEmbeddingIdentifiers:(id)a0;
- (void)addEmbeddingIdentifiersWithPhenotype:(id)a0;
- (void)clearEmbeddingIdentifiers;
- (void)clearEmbeddingIdentifiersWithPhenotypes;
- (id)embeddingIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)embeddingIdentifiersCount;
- (id)embeddingIdentifiersWithPhenotypeAtIndex:(unsigned long long)a0;
- (unsigned long long)embeddingIdentifiersWithPhenotypesCount;
- (void)mapPhenotypeData:(id)a0 toCluster:(id)a1;
- (void)mapTimeProperties:(id)a0 toPhenotype:(id)a1;

@end

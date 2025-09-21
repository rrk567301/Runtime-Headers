@class VCPProtoTimeRange;

@interface VCPProtoMovieSceneResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying> {
    struct { unsigned char distanceToPreviousScene : 1; unsigned char flickerScore : 1; unsigned char sceneprintDistanceToPreviousScene : 1; } _has;
}

@property (retain, nonatomic) VCPProtoTimeRange *timeRange;
@property (nonatomic) float qualityScore;
@property (nonatomic) char hasDistanceToPreviousScene;
@property (nonatomic) float distanceToPreviousScene;
@property (nonatomic) char hasFlickerScore;
@property (nonatomic) float flickerScore;
@property (nonatomic) char hasSceneprintDistanceToPreviousScene;
@property (nonatomic) float sceneprintDistanceToPreviousScene;

+ (id)resultFromLegacyDictionary:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)exportToLegacyDictionary;

@end

@class NSMutableArray;

@interface VCPProtoLivePhotoKeyFrameResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying> {
    struct { unsigned char contentScore : 1; unsigned char globalQualityScore : 1; } _has;
}

@property (nonatomic) double timestamp;
@property (nonatomic) float qualityScoreForLivePhoto;
@property (nonatomic) float visualPleasingScore;
@property (nonatomic) float overallFaceQualityScore;
@property (nonatomic) float exposureScore;
@property (nonatomic) float penaltyScore;
@property (nonatomic) float textureScore;
@property (nonatomic) float sharpness;
@property (retain, nonatomic) NSMutableArray *faceResults;
@property (nonatomic) char hasGlobalQualityScore;
@property (nonatomic) float globalQualityScore;
@property (nonatomic) char hasContentScore;
@property (nonatomic) float contentScore;
@property (nonatomic) float expressionChangeScore;

+ (Class)faceResultsType;
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
- (void)addFaceResults:(id)a0;
- (void)clearFaceResults;
- (id)exportToLegacyDictionary;
- (id)faceResultsAtIndex:(unsigned long long)a0;
- (unsigned long long)faceResultsCount;

@end

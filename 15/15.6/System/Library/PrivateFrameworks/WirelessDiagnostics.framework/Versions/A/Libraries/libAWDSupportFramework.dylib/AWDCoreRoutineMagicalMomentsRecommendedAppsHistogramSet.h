@class NSMutableArray;

@interface AWDCoreRoutineMagicalMomentsRecommendedAppsHistogramSet : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char confidenceOfMostConfidentModel : 1; unsigned char durationSinceLastSuccessfulTraining : 1; unsigned char fallbackModelConfidence : 1; unsigned char modelType : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSMutableArray *instances;
@property (nonatomic) char hasModelType;
@property (nonatomic) int modelType;
@property (nonatomic) char hasFallbackModelConfidence;
@property (nonatomic) int fallbackModelConfidence;
@property (nonatomic) char hasConfidenceOfMostConfidentModel;
@property (nonatomic) int confidenceOfMostConfidentModel;
@property (nonatomic) char hasDurationSinceLastSuccessfulTraining;
@property (nonatomic) int durationSinceLastSuccessfulTraining;

+ (Class)instanceType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addInstance:(id)a0;
- (unsigned long long)instancesCount;
- (void)clearInstances;
- (id)instanceAtIndex:(unsigned long long)a0;

@end

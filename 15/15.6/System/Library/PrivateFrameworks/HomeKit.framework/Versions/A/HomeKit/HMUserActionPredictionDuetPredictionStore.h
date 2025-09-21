@class NSMutableArray;

@interface HMUserActionPredictionDuetPredictionStore : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *predictions;

+ (Class)predictionType;

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
- (void)addPrediction:(id)a0;
- (void)clearPredictions;
- (id)predictionAtIndex:(unsigned long long)a0;
- (unsigned long long)predictionsCount;

@end

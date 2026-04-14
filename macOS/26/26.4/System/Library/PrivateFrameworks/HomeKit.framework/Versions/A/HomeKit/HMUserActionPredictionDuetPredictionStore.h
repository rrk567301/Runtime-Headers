@class NSMutableArray;

@interface HMUserActionPredictionDuetPredictionStore : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *predictions;

+ (Class)predictionType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (void)addPrediction:(id)a0;
- (void)clearPredictions;
- (id)predictionAtIndex:(unsigned long long)a0;
- (unsigned long long)predictionsCount;

@end

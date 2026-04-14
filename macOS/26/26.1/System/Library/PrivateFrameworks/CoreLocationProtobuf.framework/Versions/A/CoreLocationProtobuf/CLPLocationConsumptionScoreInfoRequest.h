@class NSMutableArray;

@interface CLPLocationConsumptionScoreInfoRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSMutableArray *locationConsumptionScoreInfos;

+ (Class)locationConsumptionScoreInfoType;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addLocationConsumptionScoreInfo:(id)a0;
- (void)clearLocationConsumptionScoreInfos;
- (id)locationConsumptionScoreInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)locationConsumptionScoreInfosCount;

@end

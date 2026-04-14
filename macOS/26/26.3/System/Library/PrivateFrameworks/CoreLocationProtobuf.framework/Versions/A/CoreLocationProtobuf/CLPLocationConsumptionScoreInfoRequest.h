@class NSMutableArray;

@interface CLPLocationConsumptionScoreInfoRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSMutableArray *locationConsumptionScoreInfos;

+ (Class)locationConsumptionScoreInfoType;

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
- (void)addLocationConsumptionScoreInfo:(id)a0;
- (void)clearLocationConsumptionScoreInfos;
- (id)locationConsumptionScoreInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)locationConsumptionScoreInfosCount;

@end

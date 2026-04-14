@class PCPPredictedContextDate;

@interface PCPPredictedContextDateInterval : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasStartDate;
@property (retain, nonatomic) PCPPredictedContextDate *startDate;
@property (readonly, nonatomic) BOOL hasEndDate;
@property (retain, nonatomic) PCPPredictedContextDate *endDate;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;

@end

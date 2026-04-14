@class HDCodableMedicalDate;

@interface HDCodableMedicalDateInterval : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasStartDate;
@property (retain, nonatomic) HDCodableMedicalDate *startDate;
@property (readonly, nonatomic) BOOL hasEndDate;
@property (retain, nonatomic) HDCodableMedicalDate *endDate;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;

@end

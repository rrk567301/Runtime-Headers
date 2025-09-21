@interface PKProtobufRecurringPaymentSummaryItem : PBCodable <NSCopying> {
    struct { unsigned char endDate : 1; unsigned char startDate : 1; unsigned char intervalCount : 1; unsigned char intervalUnit : 1; } _has;
}

@property (nonatomic) char hasStartDate;
@property (nonatomic) double startDate;
@property (nonatomic) char hasIntervalUnit;
@property (nonatomic) unsigned int intervalUnit;
@property (nonatomic) char hasIntervalCount;
@property (nonatomic) unsigned int intervalCount;
@property (nonatomic) char hasEndDate;
@property (nonatomic) double endDate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end

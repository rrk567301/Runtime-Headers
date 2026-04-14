@interface PKProtobufDeferredPaymentSummaryItem : PBCodable <NSCopying> {
    struct { unsigned char deferredDate : 1; } _has;
}

@property (nonatomic) BOOL hasDeferredDate;
@property (nonatomic) double deferredDate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;

@end

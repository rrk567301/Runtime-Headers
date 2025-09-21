@interface HDCodableWorkoutStatistics : PBCodable <NSCopying> {
    struct { unsigned char avgQuantity : 1; unsigned char maxQuantity : 1; unsigned char minQuantity : 1; unsigned char quantityType : 1; unsigned char sumQuantity : 1; } _has;
}

@property (nonatomic) char hasQuantityType;
@property (nonatomic) long long quantityType;
@property (nonatomic) char hasSumQuantity;
@property (nonatomic) double sumQuantity;
@property (nonatomic) char hasMinQuantity;
@property (nonatomic) double minQuantity;
@property (nonatomic) char hasMaxQuantity;
@property (nonatomic) double maxQuantity;
@property (nonatomic) char hasAvgQuantity;
@property (nonatomic) double avgQuantity;

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

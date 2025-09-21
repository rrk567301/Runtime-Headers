@interface SGM2HarvestBudgetStatusTransition : PBCodable <NSCopying> {
    struct { unsigned char fromStatus : 1; unsigned char toStatus : 1; } _has;
}

@property (nonatomic) char hasFromStatus;
@property (nonatomic) int fromStatus;
@property (nonatomic) char hasToStatus;
@property (nonatomic) int toStatus;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsFromStatus:(id)a0;
- (int)StringAsToStatus:(id)a0;
- (id)fromStatusAsString:(int)a0;
- (id)toStatusAsString:(int)a0;

@end

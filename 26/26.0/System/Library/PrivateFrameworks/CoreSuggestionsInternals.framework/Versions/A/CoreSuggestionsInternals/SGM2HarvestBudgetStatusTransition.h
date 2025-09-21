@interface SGM2HarvestBudgetStatusTransition : PBCodable <NSCopying> {
    struct { unsigned char fromStatus : 1; unsigned char toStatus : 1; } _has;
}

@property (nonatomic) BOOL hasFromStatus;
@property (nonatomic) int fromStatus;
@property (nonatomic) BOOL hasToStatus;
@property (nonatomic) int toStatus;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (int)StringAsFromStatus:(id)a0;
- (int)StringAsToStatus:(id)a0;
- (id)fromStatusAsString:(int)a0;
- (id)toStatusAsString:(int)a0;

@end

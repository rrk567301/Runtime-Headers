@class NSData;

@interface ATXPBActionCriteria : PBCodable <NSCopying> {
    struct { unsigned char endDate : 1; unsigned char startDate : 1; unsigned char isLockScreenEligible : 1; } _has;
}

@property (nonatomic) char hasStartDate;
@property (nonatomic) double startDate;
@property (nonatomic) char hasEndDate;
@property (nonatomic) double endDate;
@property (nonatomic) char hasIsLockScreenEligible;
@property (nonatomic) char isLockScreenEligible;
@property (readonly, nonatomic) char hasPredicate;
@property (retain, nonatomic) NSData *predicate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end

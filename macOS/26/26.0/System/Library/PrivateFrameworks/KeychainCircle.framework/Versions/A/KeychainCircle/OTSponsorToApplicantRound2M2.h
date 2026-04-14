@class NSData;

@interface OTSponsorToApplicantRound2M2 : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasVoucher;
@property (retain, nonatomic) NSData *voucher;
@property (readonly, nonatomic) BOOL hasVoucherSignature;
@property (retain, nonatomic) NSData *voucherSignature;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end

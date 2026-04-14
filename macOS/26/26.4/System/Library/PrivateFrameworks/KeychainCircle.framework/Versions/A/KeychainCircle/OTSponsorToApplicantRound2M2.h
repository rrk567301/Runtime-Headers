@class NSData;

@interface OTSponsorToApplicantRound2M2 : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasVoucher;
@property (retain, nonatomic) NSData *voucher;
@property (readonly, nonatomic) BOOL hasVoucherSignature;
@property (retain, nonatomic) NSData *voucherSignature;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end

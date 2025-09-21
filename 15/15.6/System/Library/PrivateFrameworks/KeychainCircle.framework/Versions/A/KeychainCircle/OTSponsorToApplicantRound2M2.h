@class NSData;

@interface OTSponsorToApplicantRound2M2 : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasVoucher;
@property (retain, nonatomic) NSData *voucher;
@property (readonly, nonatomic) char hasVoucherSignature;
@property (retain, nonatomic) NSData *voucherSignature;

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

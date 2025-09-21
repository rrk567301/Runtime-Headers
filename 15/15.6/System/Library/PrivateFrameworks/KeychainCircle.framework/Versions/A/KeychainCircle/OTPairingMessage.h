@class OTApplicantToSponsorRound2M1, OTSupportOctagonMessage, OTSponsorToApplicantRound2M2, OTSponsorToApplicantRound1M2, OTSupportSOSMessage;

@interface OTPairingMessage : PBCodable <NSCopying> {
    struct { unsigned char version : 1; } _has;
}

@property (readonly, nonatomic) char hasEpoch;
@property (retain, nonatomic) OTSponsorToApplicantRound1M2 *epoch;
@property (readonly, nonatomic) char hasPrepare;
@property (retain, nonatomic) OTApplicantToSponsorRound2M1 *prepare;
@property (readonly, nonatomic) char hasVoucher;
@property (retain, nonatomic) OTSponsorToApplicantRound2M2 *voucher;
@property (readonly, nonatomic) char hasSupportsOctagon;
@property (retain, nonatomic) OTSupportOctagonMessage *supportsOctagon;
@property (readonly, nonatomic) char hasSupportsSOS;
@property (retain, nonatomic) OTSupportSOSMessage *supportsSOS;
@property (nonatomic) char hasVersion;
@property (nonatomic) unsigned long long version;

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

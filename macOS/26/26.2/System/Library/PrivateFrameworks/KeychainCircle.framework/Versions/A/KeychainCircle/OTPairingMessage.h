@class OTApplicantToSponsorRound2M1, OTSupportOctagonMessage, OTSponsorToApplicantRound2M2, OTSponsorToApplicantRound1M2, OTSupportSOSMessage;

@interface OTPairingMessage : PBCodable <NSCopying> {
    struct { unsigned char version : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasEpoch;
@property (retain, nonatomic) OTSponsorToApplicantRound1M2 *epoch;
@property (readonly, nonatomic) BOOL hasPrepare;
@property (retain, nonatomic) OTApplicantToSponsorRound2M1 *prepare;
@property (readonly, nonatomic) BOOL hasVoucher;
@property (retain, nonatomic) OTSponsorToApplicantRound2M2 *voucher;
@property (readonly, nonatomic) BOOL hasSupportsOctagon;
@property (retain, nonatomic) OTSupportOctagonMessage *supportsOctagon;
@property (readonly, nonatomic) BOOL hasSupportsSOS;
@property (retain, nonatomic) OTSupportSOSMessage *supportsSOS;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) unsigned long long version;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;

@end

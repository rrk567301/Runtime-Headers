@class NSString;

@interface OTCDPRecoveryInformation : PBCodable <NSCopying> {
    struct { unsigned char containsIcdpData : 1; unsigned char nonViableRepair : 1; unsigned char silentRecoveryAttempt : 1; unsigned char useCachedSecret : 1; unsigned char usePreviouslyCachedRecoveryKey : 1; unsigned char usesMultipleIcsc : 1; } _has;
}

@property (readonly, nonatomic) char hasRecoverySecret;
@property (retain, nonatomic) NSString *recoverySecret;
@property (nonatomic) char hasUseCachedSecret;
@property (nonatomic) char useCachedSecret;
@property (readonly, nonatomic) char hasRecoveryKey;
@property (retain, nonatomic) NSString *recoveryKey;
@property (nonatomic) char hasUsePreviouslyCachedRecoveryKey;
@property (nonatomic) char usePreviouslyCachedRecoveryKey;
@property (nonatomic) char hasSilentRecoveryAttempt;
@property (nonatomic) char silentRecoveryAttempt;
@property (nonatomic) char hasContainsIcdpData;
@property (nonatomic) char containsIcdpData;
@property (nonatomic) char hasUsesMultipleIcsc;
@property (nonatomic) char usesMultipleIcsc;
@property (nonatomic) char hasNonViableRepair;
@property (nonatomic) char nonViableRepair;

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

@class NSString, NSData, CKDPZone, CKDPDate, CKDPZoneCapabilities;

@interface CKDPZoneRetrieveResponseZoneSummary : PBCodable <NSCopying> {
    struct { unsigned char assetQuotaUsage : 1; unsigned char metadataQuotaUsage : 1; unsigned char deviceCount : 1; unsigned char expired : 1; unsigned char zoneKeyRollAllowed : 1; unsigned char zoneishPcsNeedsRolled : 1; } _has;
}

@property (readonly, nonatomic) char hasTargetZone;
@property (retain, nonatomic) CKDPZone *targetZone;
@property (readonly, nonatomic) char hasCurrentServerContinuationToken;
@property (retain, nonatomic) NSData *currentServerContinuationToken;
@property (readonly, nonatomic) char hasClientChangeToken;
@property (retain, nonatomic) NSData *clientChangeToken;
@property (nonatomic) char hasDeviceCount;
@property (nonatomic) int deviceCount;
@property (nonatomic) char hasAssetQuotaUsage;
@property (nonatomic) long long assetQuotaUsage;
@property (nonatomic) char hasMetadataQuotaUsage;
@property (nonatomic) long long metadataQuotaUsage;
@property (readonly, nonatomic) char hasCapabilities;
@property (retain, nonatomic) CKDPZoneCapabilities *capabilities;
@property (nonatomic) char hasZoneishPcsNeedsRolled;
@property (nonatomic) char zoneishPcsNeedsRolled;
@property (nonatomic) char hasZoneKeyRollAllowed;
@property (nonatomic) char zoneKeyRollAllowed;
@property (readonly, nonatomic) char hasZonePcsModificationTime;
@property (retain, nonatomic) CKDPDate *zonePcsModificationTime;
@property (readonly, nonatomic) char hasZonePcsModificationDevice;
@property (retain, nonatomic) NSString *zonePcsModificationDevice;
@property (nonatomic) char hasExpired;
@property (nonatomic) char expired;
@property (readonly, nonatomic) char hasExpirationTime;
@property (retain, nonatomic) CKDPDate *expirationTime;

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

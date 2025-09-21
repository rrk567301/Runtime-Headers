@class CKDPDate, CKDPIdentifier, CKDPRecordZoneIdentifier;

@interface CKDPZoneUsage : PBCodable <NSCopying> {
    struct { unsigned char version : 1; } _has;
}

@property (nonatomic) char hasVersion;
@property (nonatomic) int version;
@property (readonly, nonatomic) char hasTime;
@property (retain, nonatomic) CKDPDate *time;
@property (readonly, nonatomic) char hasDeviceIdentifier;
@property (retain, nonatomic) CKDPIdentifier *deviceIdentifier;
@property (readonly, nonatomic) char hasUserIdentifier;
@property (retain, nonatomic) CKDPIdentifier *userIdentifier;
@property (readonly, nonatomic) char hasZoneIdentifier;
@property (retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier;

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

@class CKDPDate, CKDPIdentifier, CKDPRecordZoneIdentifier;

@interface CKDPZoneUsage : PBCodable <NSCopying> {
    struct { unsigned char version : 1; } _has;
}

@property (nonatomic) BOOL hasVersion;
@property (nonatomic) int version;
@property (readonly, nonatomic) BOOL hasTime;
@property (retain, nonatomic) CKDPDate *time;
@property (readonly, nonatomic) BOOL hasDeviceIdentifier;
@property (retain, nonatomic) CKDPIdentifier *deviceIdentifier;
@property (readonly, nonatomic) BOOL hasUserIdentifier;
@property (retain, nonatomic) CKDPIdentifier *userIdentifier;
@property (readonly, nonatomic) BOOL hasZoneIdentifier;
@property (retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier;

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

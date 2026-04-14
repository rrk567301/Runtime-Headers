@class NSString, CKDPShareIdentifier, CKDPDate, CKDPIdentifier;

@interface CKDPShareUsage : PBCodable <NSCopying> {
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
@property (readonly, nonatomic) BOOL hasShareIdentifier;
@property (retain, nonatomic) CKDPShareIdentifier *shareIdentifier;
@property (readonly, nonatomic) BOOL hasParticipantHandle;
@property (retain, nonatomic) NSString *participantHandle;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end

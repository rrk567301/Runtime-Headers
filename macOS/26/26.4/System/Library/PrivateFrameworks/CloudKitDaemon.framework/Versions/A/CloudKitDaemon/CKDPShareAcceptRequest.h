@class NSString, CKDPShareIdentifier, CKDPProtectionInfo;

@interface CKDPShareAcceptRequest : PBRequest <NSCopying> {
    struct { unsigned char publicKeyVersion : 1; unsigned char acceptedInProcess : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasShareId;
@property (retain, nonatomic) CKDPShareIdentifier *shareId;
@property (readonly, nonatomic) BOOL hasEtag;
@property (retain, nonatomic) NSString *etag;
@property (readonly, nonatomic) BOOL hasSelfAddedPcs;
@property (retain, nonatomic) CKDPProtectionInfo *selfAddedPcs;
@property (readonly, nonatomic) BOOL hasPublicKey;
@property (retain, nonatomic) CKDPProtectionInfo *publicKey;
@property (readonly, nonatomic) BOOL hasProtectionInfo;
@property (retain, nonatomic) CKDPProtectionInfo *protectionInfo;
@property (readonly, nonatomic) BOOL hasParticipantId;
@property (retain, nonatomic) NSString *participantId;
@property (nonatomic) BOOL hasPublicKeyVersion;
@property (nonatomic) int publicKeyVersion;
@property (nonatomic) BOOL hasAcceptedInProcess;
@property (nonatomic) BOOL acceptedInProcess;

+ (id)options;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (Class)responseClass;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned int)requestTypeCode;

@end

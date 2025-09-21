@class NSString, CKDPShareIdentifier, CKDPProtectionInfo;

@interface CKDPShareAcceptRequest : PBRequest <NSCopying> {
    struct { unsigned char publicKeyVersion : 1; unsigned char acceptedInProcess : 1; } _has;
}

@property (readonly, nonatomic) char hasShareId;
@property (retain, nonatomic) CKDPShareIdentifier *shareId;
@property (readonly, nonatomic) char hasEtag;
@property (retain, nonatomic) NSString *etag;
@property (readonly, nonatomic) char hasSelfAddedPcs;
@property (retain, nonatomic) CKDPProtectionInfo *selfAddedPcs;
@property (readonly, nonatomic) char hasPublicKey;
@property (retain, nonatomic) CKDPProtectionInfo *publicKey;
@property (readonly, nonatomic) char hasProtectionInfo;
@property (retain, nonatomic) CKDPProtectionInfo *protectionInfo;
@property (readonly, nonatomic) char hasParticipantId;
@property (retain, nonatomic) NSString *participantId;
@property (nonatomic) char hasPublicKeyVersion;
@property (nonatomic) int publicKeyVersion;
@property (nonatomic) char hasAcceptedInProcess;
@property (nonatomic) char acceptedInProcess;

+ (id)options;

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
- (unsigned int)requestTypeCode;
- (Class)responseClass;

@end

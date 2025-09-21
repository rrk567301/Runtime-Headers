@class NSString, CKDPShareIdentifier, CKDPProtectionInfo;

@interface CKDPShareDeclineRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) char hasShareId;
@property (retain, nonatomic) CKDPShareIdentifier *shareId;
@property (readonly, nonatomic) char hasParticipantId;
@property (retain, nonatomic) NSString *participantId;
@property (readonly, nonatomic) char hasProtectionInfo;
@property (retain, nonatomic) CKDPProtectionInfo *protectionInfo;

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

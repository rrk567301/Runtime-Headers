@class NSData, CKDPShareIdentifier, NSString;

@interface CKDPShareVettingInitiateRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasShareId;
@property (retain, nonatomic) CKDPShareIdentifier *shareId;
@property (readonly, nonatomic) BOOL hasEncryptedKey;
@property (retain, nonatomic) NSData *encryptedKey;
@property (readonly, nonatomic) BOOL hasParticipantId;
@property (retain, nonatomic) NSString *participantId;
@property (readonly, nonatomic) BOOL hasBaseToken;
@property (retain, nonatomic) NSString *baseToken;

+ (id)options;

- (Class)responseClass;
- (unsigned int)requestTypeCode;
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

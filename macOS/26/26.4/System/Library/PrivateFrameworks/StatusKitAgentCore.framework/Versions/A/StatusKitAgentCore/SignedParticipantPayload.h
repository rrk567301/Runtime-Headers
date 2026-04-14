@class NSData, DecryptedParticipantPayload;

@interface SignedParticipantPayload : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasLegacyPayload;
@property (retain, nonatomic) DecryptedParticipantPayload *legacyPayload;
@property (readonly, nonatomic) BOOL hasLegacySignature;
@property (retain, nonatomic) NSData *legacySignature;
@property (readonly, nonatomic) BOOL hasPayloadBytes;
@property (retain, nonatomic) NSData *payloadBytes;
@property (readonly, nonatomic) BOOL hasSignature;
@property (retain, nonatomic) NSData *signature;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end

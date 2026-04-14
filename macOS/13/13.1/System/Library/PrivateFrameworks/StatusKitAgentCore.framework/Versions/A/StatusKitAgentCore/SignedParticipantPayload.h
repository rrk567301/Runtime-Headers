@class NSData, DecryptedParticipantPayload;

@interface SignedParticipantPayload : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasPayload;
@property (retain, nonatomic) DecryptedParticipantPayload *payload;
@property (readonly, nonatomic) BOOL hasSignature;
@property (retain, nonatomic) NSData *signature;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;

@end

@class NSData;

@interface ChannelActivityParticipantPayload : PBCodable <NSCopying> {
    struct { unsigned char serverUpdateTimestampSeconds : 1; } _has;
}

@property (readonly, nonatomic) char hasEncryptedParticipantPayload;
@property (retain, nonatomic) NSData *encryptedParticipantPayload;
@property (nonatomic) char hasServerUpdateTimestampSeconds;
@property (nonatomic) unsigned long long serverUpdateTimestampSeconds;

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

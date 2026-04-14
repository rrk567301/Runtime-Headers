@class NSData;

@interface ChannelActivityParticipantPayload : PBCodable <NSCopying> {
    struct { unsigned char serverUpdateTimestampSeconds : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasEncryptedParticipantPayload;
@property (retain, nonatomic) NSData *encryptedParticipantPayload;
@property (nonatomic) BOOL hasServerUpdateTimestampSeconds;
@property (nonatomic) unsigned long long serverUpdateTimestampSeconds;

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

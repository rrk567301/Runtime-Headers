@class NSData;

@interface ChannelActivityParticipantPayload : PBCodable <NSCopying> {
    struct { unsigned char serverUpdateTimestampSeconds : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasEncryptedParticipantPayload;
@property (retain, nonatomic) NSData *encryptedParticipantPayload;
@property (nonatomic) BOOL hasServerUpdateTimestampSeconds;
@property (nonatomic) unsigned long long serverUpdateTimestampSeconds;

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

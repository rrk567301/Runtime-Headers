@class NSString, NSData;

@interface DecryptedParticipantPayload : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; } _has;
}

@property (readonly, nonatomic) char hasTokenUri;
@property (retain, nonatomic) NSString *tokenUri;
@property (readonly, nonatomic) char hasPresenceIdentifier;
@property (retain, nonatomic) NSString *presenceIdentifier;
@property (readonly, nonatomic) char hasChannelIdentifier;
@property (retain, nonatomic) NSString *channelIdentifier;
@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) char hasClientPayload;
@property (retain, nonatomic) NSData *clientPayload;

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

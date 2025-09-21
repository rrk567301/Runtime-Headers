@class NSData, NSString;

@interface SharedChannelProvisionOffGridPacket : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasPublishPayload;
@property (retain, nonatomic) NSData *publishPayload;
@property (readonly, nonatomic) char hasChannelTopic;
@property (retain, nonatomic) NSString *channelTopic;
@property (readonly, nonatomic) char hasChannelId;
@property (retain, nonatomic) NSData *channelId;
@property (readonly, nonatomic) char hasCommitmentSalt;
@property (retain, nonatomic) NSData *commitmentSalt;

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

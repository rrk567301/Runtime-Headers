@class NSData, NSString;

@interface SharedChannelProvisionOffGridPacket : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasPublishPayload;
@property (retain, nonatomic) NSData *publishPayload;
@property (readonly, nonatomic) BOOL hasChannelTopic;
@property (retain, nonatomic) NSString *channelTopic;
@property (readonly, nonatomic) BOOL hasChannelId;
@property (retain, nonatomic) NSData *channelId;
@property (readonly, nonatomic) BOOL hasCommitmentSalt;
@property (retain, nonatomic) NSData *commitmentSalt;

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

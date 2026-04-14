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

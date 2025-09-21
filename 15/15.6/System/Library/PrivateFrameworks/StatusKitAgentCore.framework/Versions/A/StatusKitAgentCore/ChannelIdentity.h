@class NSString, NSData;

@interface ChannelIdentity : PBCodable <NSCopying> {
    struct { unsigned char channelOwnershipType : 1; } _has;
}

@property (readonly, nonatomic) char hasChannelTopic;
@property (retain, nonatomic) NSString *channelTopic;
@property (readonly, nonatomic) char hasChannelId;
@property (retain, nonatomic) NSData *channelId;
@property (readonly, nonatomic) char hasChannelToken;
@property (retain, nonatomic) NSData *channelToken;
@property (nonatomic) char hasChannelOwnershipType;
@property (nonatomic) int channelOwnershipType;

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
- (int)StringAsChannelOwnershipType:(id)a0;
- (id)channelOwnershipTypeAsString:(int)a0;

@end

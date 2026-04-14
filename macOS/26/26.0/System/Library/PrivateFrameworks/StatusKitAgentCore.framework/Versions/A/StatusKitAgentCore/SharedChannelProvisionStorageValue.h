@class NSMutableArray;

@interface SharedChannelProvisionStorageValue : PBCodable <NSCopying> {
    struct { unsigned char pushPriority : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *channelPublishProvisionPacketInfos;
@property (nonatomic) BOOL hasPushPriority;
@property (nonatomic) int pushPriority;

+ (Class)channelPublishProvisionPacketInfoType;

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
- (int)StringAsPushPriority:(id)a0;
- (void)addChannelPublishProvisionPacketInfo:(id)a0;
- (id)channelPublishProvisionPacketInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)channelPublishProvisionPacketInfosCount;
- (void)clearChannelPublishProvisionPacketInfos;
- (id)pushPriorityAsString:(int)a0;

@end

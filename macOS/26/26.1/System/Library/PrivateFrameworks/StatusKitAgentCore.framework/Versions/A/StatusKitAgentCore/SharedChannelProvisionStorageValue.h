@class NSMutableArray;

@interface SharedChannelProvisionStorageValue : PBCodable <NSCopying> {
    struct { unsigned char pushPriority : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *channelPublishProvisionPacketInfos;
@property (nonatomic) BOOL hasPushPriority;
@property (nonatomic) int pushPriority;

+ (Class)channelPublishProvisionPacketInfoType;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsPushPriority:(id)a0;
- (void)addChannelPublishProvisionPacketInfo:(id)a0;
- (id)channelPublishProvisionPacketInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)channelPublishProvisionPacketInfosCount;
- (void)clearChannelPublishProvisionPacketInfos;
- (id)pushPriorityAsString:(int)a0;

@end

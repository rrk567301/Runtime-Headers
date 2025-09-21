@class NSData;

@interface SharedChannelPublishPayload : PBCodable <NSCopying> {
    struct { unsigned char notificationDisplayEpochSeconds : 1; } _has;
}

@property (readonly, nonatomic) char hasPublishPayloadContent;
@property (retain, nonatomic) NSData *publishPayloadContent;
@property (nonatomic) char hasNotificationDisplayEpochSeconds;
@property (nonatomic) unsigned long long notificationDisplayEpochSeconds;

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

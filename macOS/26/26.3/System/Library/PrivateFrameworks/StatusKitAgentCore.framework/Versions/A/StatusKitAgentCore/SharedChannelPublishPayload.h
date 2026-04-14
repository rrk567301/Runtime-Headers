@class NSData;

@interface SharedChannelPublishPayload : PBCodable <NSCopying> {
    struct { unsigned char notificationDisplayEpochSeconds : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasPublishPayloadContent;
@property (retain, nonatomic) NSData *publishPayloadContent;
@property (nonatomic) BOOL hasNotificationDisplayEpochSeconds;
@property (nonatomic) unsigned long long notificationDisplayEpochSeconds;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end

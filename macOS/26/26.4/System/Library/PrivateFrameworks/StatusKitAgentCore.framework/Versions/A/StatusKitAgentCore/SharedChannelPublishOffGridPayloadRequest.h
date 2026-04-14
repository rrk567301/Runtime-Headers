@class NSData;

@interface SharedChannelPublishOffGridPayloadRequest : PBRequest <NSCopying> {
    struct { unsigned char notificationDisplayEpochSeconds : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasEncryptionKey;
@property (retain, nonatomic) NSData *encryptionKey;
@property (nonatomic) BOOL hasNotificationDisplayEpochSeconds;
@property (nonatomic) unsigned long long notificationDisplayEpochSeconds;

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

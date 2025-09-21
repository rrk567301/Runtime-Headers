@interface NTPBLocalNotificationReturn : PBCodable <NSCopying> {
    struct { unsigned char localNotificationSentTimestamp : 1; unsigned char localNoticationNumberReceived : 1; unsigned char localNotificationDirectOpenNumber : 1; unsigned char localNotificationType : 1; unsigned char localNotificationDirectOpen : 1; } _has;
}

@property (nonatomic) char hasLocalNotificationDirectOpen;
@property (nonatomic) char localNotificationDirectOpen;
@property (nonatomic) char hasLocalNoticationNumberReceived;
@property (nonatomic) int localNoticationNumberReceived;
@property (nonatomic) char hasLocalNotificationType;
@property (nonatomic) int localNotificationType;
@property (nonatomic) char hasLocalNotificationSentTimestamp;
@property (nonatomic) long long localNotificationSentTimestamp;
@property (nonatomic) char hasLocalNotificationDirectOpenNumber;
@property (nonatomic) int localNotificationDirectOpenNumber;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end

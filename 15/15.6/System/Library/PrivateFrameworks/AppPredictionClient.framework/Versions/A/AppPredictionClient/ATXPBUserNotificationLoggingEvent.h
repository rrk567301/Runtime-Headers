@class NSString, ATXPBUserNotification;

@interface ATXPBUserNotificationLoggingEvent : PBCodable <ATXJSONSerializableProtocol, NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char deliveryReason : 1; unsigned char deliveryUI : 1; unsigned char eventType : 1; } _has;
}

@property (readonly, nonatomic) char hasNotification;
@property (retain, nonatomic) ATXPBUserNotification *notification;
@property (nonatomic) char hasEventType;
@property (nonatomic) int eventType;
@property (nonatomic) char hasTimestamp;
@property (nonatomic) double timestamp;
@property (readonly, nonatomic) char hasModeIdentifier;
@property (retain, nonatomic) NSString *modeIdentifier;
@property (nonatomic) char hasDeliveryReason;
@property (nonatomic) int deliveryReason;
@property (nonatomic) char hasDeliveryUI;
@property (nonatomic) int deliveryUI;

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
- (int)StringAsEventType:(id)a0;
- (id)eventTypeAsString:(int)a0;
- (id)jsonRepresentation;
- (int)StringAsDeliveryReason:(id)a0;
- (int)StringAsDeliveryUI:(id)a0;
- (id)deliveryReasonAsString:(int)a0;
- (id)deliveryUIAsString:(int)a0;
- (id)initFromJSON:(id)a0;

@end

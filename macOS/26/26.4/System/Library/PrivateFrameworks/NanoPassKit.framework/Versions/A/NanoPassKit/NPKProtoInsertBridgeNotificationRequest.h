@class NSString, NSData;

@interface NPKProtoInsertBridgeNotificationRequest : PBRequest <NSCopying> {
    struct { unsigned char playSound : 1; } _has;
}

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *message;
@property (readonly, nonatomic) BOOL hasActionURLString;
@property (retain, nonatomic) NSString *actionURLString;
@property (readonly, nonatomic) BOOL hasPassUniqueID;
@property (retain, nonatomic) NSString *passUniqueID;
@property (nonatomic) BOOL hasPlaySound;
@property (nonatomic) BOOL playSound;
@property (readonly, nonatomic) BOOL hasNotificationIdentifier;
@property (retain, nonatomic) NSString *notificationIdentifier;
@property (readonly, nonatomic) BOOL hasExpirationDateData;
@property (retain, nonatomic) NSData *expirationDateData;

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

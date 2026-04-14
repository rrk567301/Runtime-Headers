@interface HDCodableCompanionUserNotificationConfiguration : PBCodable <NSCopying> {
    struct { unsigned char notificationType : 1; } _has;
}

@property (nonatomic) BOOL hasNotificationType;
@property (nonatomic) int notificationType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (int)StringAsNotificationType:(id)a0;
- (id)notificationTypeAsString:(int)a0;

@end

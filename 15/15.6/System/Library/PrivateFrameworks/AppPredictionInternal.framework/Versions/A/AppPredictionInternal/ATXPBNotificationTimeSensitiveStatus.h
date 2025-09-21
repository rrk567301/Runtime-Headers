@class NSString;

@interface ATXPBNotificationTimeSensitiveStatus : PBCodable <NSCopying> {
    struct { unsigned char isTimeSensitiveAndEngagedNotification : 1; unsigned char isTimeSensitiveNotification : 1; } _has;
}

@property (readonly, nonatomic) char hasBundleId;
@property (retain, nonatomic) NSString *bundleId;
@property (nonatomic) char hasIsTimeSensitiveNotification;
@property (nonatomic) char isTimeSensitiveNotification;
@property (nonatomic) char hasIsTimeSensitiveAndEngagedNotification;
@property (nonatomic) char isTimeSensitiveAndEngagedNotification;

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

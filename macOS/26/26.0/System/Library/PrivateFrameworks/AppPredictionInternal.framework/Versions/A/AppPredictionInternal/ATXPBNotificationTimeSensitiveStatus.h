@class NSString;

@interface ATXPBNotificationTimeSensitiveStatus : PBCodable <NSCopying> {
    struct { unsigned char isTimeSensitiveAndEngagedNotification : 1; unsigned char isTimeSensitiveNotification : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasBundleId;
@property (retain, nonatomic) NSString *bundleId;
@property (nonatomic) BOOL hasIsTimeSensitiveNotification;
@property (nonatomic) BOOL isTimeSensitiveNotification;
@property (nonatomic) BOOL hasIsTimeSensitiveAndEngagedNotification;
@property (nonatomic) BOOL isTimeSensitiveAndEngagedNotification;

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

@end

@class NSMutableArray;

@interface _MRNotificationMessageProtobuf : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *notifications;
@property (retain, nonatomic) NSMutableArray *userInfos;
@property (retain, nonatomic) NSMutableArray *playerPaths;

+ (Class)notificationType;
+ (Class)userInfoType;
+ (Class)playerPathType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)addNotification:(id)a0;
- (void)clearNotifications;
- (unsigned long long)notificationsCount;
- (id)notificationAtIndex:(unsigned long long)a0;
- (void)clearUserInfos;
- (void)addUserInfo:(id)a0;
- (unsigned long long)userInfosCount;
- (id)userInfoAtIndex:(unsigned long long)a0;
- (void)clearPlayerPaths;
- (void)addPlayerPath:(id)a0;
- (unsigned long long)playerPathsCount;
- (id)playerPathAtIndex:(unsigned long long)a0;

@end

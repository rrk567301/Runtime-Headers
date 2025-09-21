@class NSString, NSMutableArray, ATXPBSharedDigestEngagementTrackingMetrics;

@interface ATXPBUserNotificationDigestNotificationGroup : PBCodable <ATXJSONSerializableProtocol, NSCopying> {
    struct { unsigned char priority : 1; } _has;
}

@property (readonly, nonatomic) char hasGroupId;
@property (retain, nonatomic) NSString *groupId;
@property (readonly, nonatomic) char hasTitle;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) char hasGroupDescription;
@property (retain, nonatomic) NSString *groupDescription;
@property (nonatomic) char hasPriority;
@property (nonatomic) double priority;
@property (readonly, nonatomic) char hasRepresentativeNotificationUUID;
@property (retain, nonatomic) NSString *representativeNotificationUUID;
@property (retain, nonatomic) NSMutableArray *rankedNotifications;
@property (readonly, nonatomic) char hasSharedEngagementTracker;
@property (retain, nonatomic) ATXPBSharedDigestEngagementTrackingMetrics *sharedEngagementTracker;

+ (Class)rankedNotificationsType;

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
- (id)jsonRepresentation;
- (void)addRankedNotifications:(id)a0;
- (void)clearRankedNotifications;
- (id)initFromJSON:(id)a0;
- (id)rankedNotificationsAtIndex:(unsigned long long)a0;
- (unsigned long long)rankedNotificationsCount;

@end

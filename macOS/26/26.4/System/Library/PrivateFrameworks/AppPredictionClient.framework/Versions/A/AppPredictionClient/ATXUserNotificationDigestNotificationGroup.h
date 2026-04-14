@class NSString, NSUUID, ATXSharedDigestEngagementTrackingMetrics, NSArray;

@interface ATXUserNotificationDigestNotificationGroup : NSObject <NSSecureCoding, ATXProtoBufWrapper, ATXJSONSerializableProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *groupId;
@property (readonly, nonatomic) NSString *bundleId;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *groupDescription;
@property (nonatomic) double priority;
@property (retain, nonatomic) NSUUID *representativeNotificationUUID;
@property (retain, nonatomic) ATXSharedDigestEngagementTrackingMetrics *digestEngagementTrackingMetrics;
@property (readonly, nonatomic) NSArray *rankedNotifications;
@property (readonly, nonatomic) double appSpecifiedScore;

+ (id)groupsFromNotifications:(id)a0 modeId:(id)a1;
+ (id)groupsFromProtos:(id)a0;
+ (id)protosFromGroups:(id)a0;

- (id)initFromJSON:(id)a0;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithProto:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)jsonRepresentation;
- (id)initWithNotifications:(id)a0;
- (BOOL)hasPreviewableAttachment;
- (id)initWithNotifications:(id)a0 modeId:(id)a1;
- (id)initWithNotifications:(id)a0 useDigestOrder:(BOOL)a1;
- (BOOL)isCommunicationGroup;

@end

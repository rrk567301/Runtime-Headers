@class NSString, NSUUID, ATXSharedDigestEngagementTrackingMetrics, NSArray;

@interface ATXUserNotificationDigestNotificationGroup : NSObject <NSSecureCoding, ATXProtoBufWrapper, ATXJSONSerializableProtocol>

@property (class, readonly) char supportsSecureCoding;

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

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNotifications:(id)a0;
- (id)jsonRepresentation;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)initWithProto:(id)a0;
- (char)hasPreviewableAttachment;
- (id)initFromJSON:(id)a0;
- (id)initWithNotifications:(id)a0 modeId:(id)a1;
- (id)initWithNotifications:(id)a0 useDigestOrder:(char)a1;
- (char)isCommunicationGroup;

@end

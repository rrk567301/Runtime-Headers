@class NSArray, NSUUID, NSString, ATXSharedDigestEngagementTrackingMetrics, ATXDigestTimeline, ATXMissedNotificationRankingBiomeStream;

@interface ATXMissedNotificationRanking : NSObject <NSSecureCoding, ATXProtoBufWrapper, ATXJSONSerializableProtocol, BMStoreData>

@property (class, readonly) char supportsSecureCoding;
@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) double creationTimestamp;
@property (readonly, nonatomic) NSArray *rankedGroups;
@property (readonly, nonatomic) NSUUID *uuid;
@property (copy, nonatomic) NSString *rankerId;
@property (copy, nonatomic) NSString *modeIdString;
@property (copy, nonatomic) ATXSharedDigestEngagementTrackingMetrics *digestEngagementTrackingMetrics;
@property (copy, nonatomic) ATXDigestTimeline *digestTimeline;
@property (retain, nonatomic) ATXMissedNotificationRankingBiomeStream *loggingStream;
@property (nonatomic) char hasLoggedCollapsed;
@property (nonatomic) char hasLoggedExpanded;
@property (nonatomic) char hasLoggedUpcomingExpanded;
@property (nonatomic) char hasLoggedDeliveredExpanded;
@property (nonatomic) char hasLoggedUpcomingCollapsed;
@property (nonatomic) char hasLoggedDeliveredCollapsed;
@property (nonatomic) char hasLoggedRemoval;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)json;
- (id)jsonDict;
- (id)serialize;
- (id)jsonRepresentation;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)initWithProto:(id)a0;
- (void)logCollapsedViewWithIsUpcoming:(char)a0;
- (void)logView;
- (id)allNotificationIds;
- (char)doesRankingShareContentWithOtherRanking:(id)a0;
- (id)initFromJSON:(id)a0;
- (id)initWithGroups:(id)a0 modeId:(id)a1 ranker:(id)a2;
- (id)initWithNotificationArrays:(id)a0 modeId:(id)a1 ranker:(id)a2;
- (id)initWithNotifications:(id)a0 modeId:(id)a1;
- (id)initWithNotifications:(id)a0 modeId:(id)a1 ranker:(id)a2;
- (void)logCollapsedPreview;
- (void)logExpandedViewWithIsUpcoming:(char)a0;
- (void)logRemoval;

@end

@class NSArray, NSUUID, NSString, ATXSharedDigestEngagementTrackingMetrics, ATXDigestTimeline, ATXMissedNotificationRankingBiomeStream;

@interface ATXMissedNotificationRanking : NSObject <NSSecureCoding, ATXProtoBufWrapper, ATXJSONSerializableProtocol, BMStoreData>

@property (class, readonly) BOOL supportsSecureCoding;
@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) double creationTimestamp;
@property (readonly, nonatomic) NSArray *rankedGroups;
@property (readonly, nonatomic) NSUUID *uuid;
@property (copy, nonatomic) NSString *rankerId;
@property (copy, nonatomic) NSString *modeIdString;
@property (copy, nonatomic) ATXSharedDigestEngagementTrackingMetrics *digestEngagementTrackingMetrics;
@property (copy, nonatomic) ATXDigestTimeline *digestTimeline;
@property (retain, nonatomic) ATXMissedNotificationRankingBiomeStream *loggingStream;
@property (nonatomic) BOOL hasLoggedCollapsed;
@property (nonatomic) BOOL hasLoggedExpanded;
@property (nonatomic) BOOL hasLoggedUpcomingExpanded;
@property (nonatomic) BOOL hasLoggedDeliveredExpanded;
@property (nonatomic) BOOL hasLoggedUpcomingCollapsed;
@property (nonatomic) BOOL hasLoggedDeliveredCollapsed;
@property (nonatomic) BOOL hasLoggedRemoval;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initFromJSON:(id)a0;
- (id)encodeAsProto;
- (id)jsonRepresentation;
- (id)initWithProto:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)json;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)jsonDict;
- (id)serialize;
- (id)initWithCoder:(id)a0;
- (id)proto;
- (void).cxx_destruct;
- (void)logView;
- (void)logCollapsedViewWithIsUpcoming:(BOOL)a0;
- (id)allNotificationIds;
- (BOOL)doesRankingShareContentWithOtherRanking:(id)a0;
- (id)initWithGroups:(id)a0 modeId:(id)a1 ranker:(id)a2;
- (id)initWithNotificationArrays:(id)a0 modeId:(id)a1 ranker:(id)a2;
- (id)initWithNotifications:(id)a0 modeId:(id)a1;
- (id)initWithNotifications:(id)a0 modeId:(id)a1 ranker:(id)a2;
- (void)logCollapsedPreview;
- (void)logExpandedViewWithIsUpcoming:(BOOL)a0;
- (void)logRemoval;

@end

@interface HMDHomeEventsGenerated : NSObject

+ (id)topicMap;
+ (id)allTopics;
+ (id)upstreamTopicsForTopic:(id)a0;
+ (id)indexTopicForTopicSuffix:(id)a0 indexName:(id)a1;
+ (id)homeInfoIndexForHomeUUID:(id)a0;
+ (BOOL)isHomeInfoIndexTopic:(id)a0 homeUUID:(id)a1;
+ (id)clientIndexToHomeTopicsForHomeUUID:(id)a0;
+ (id)forwardingTopicsWithTopics:(id)a0 forHomeRouterWithUUID:(id)a1;
+ (id)upstreamClientTopicForTopic:(id)a0;
+ (id)upstreamHomeTopicForTopic:(id)a0 homeUUID:(id)a1;
+ (id)upstreamHomeAndAccessoryTopicsForTopic:(id)a0 homeUUID:(id)a1 accessoryUUID:(id)a2;
+ (id)accessoryTopicsForAccessory:(id)a0 homeUUID:(id)a1;
+ (id)expandedTopicsWithTopics:(id)a0 homeManager:(id)a1;

@end

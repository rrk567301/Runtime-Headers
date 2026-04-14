@interface HMAccessoryEventTopic : NSObject

+ (unsigned long long)suffixIDFromTopicSuffix:(id)a0;
+ (id)topicFromSuffixID:(unsigned long long)a0 homeUUID:(id)a1 accessoryUUID:(id)a2;

@end

@class NSUUID, NSString;

@interface HMParsedEventTopic : NSObject <HMParsedAccessoryEventTopic, HMParsedAccessorySettingEventTopic, HMParsedHomeEventTopic>

@property (copy, nonatomic) NSUUID *homeUUID;
@property (copy, nonatomic) NSUUID *userUUID;
@property (copy, nonatomic) NSUUID *accessoryUUID;
@property (copy, nonatomic) NSString *accessorySettingKeyPath;
@property (copy, nonatomic) NSString *topicSuffix;
@property (readonly, copy, nonatomic) NSString *originalTopic;
@property (readonly, nonatomic) unsigned long long accessoryEventTopicSuffixID;
@property (readonly, nonatomic) unsigned long long homeEventTopicSuffixID;

- (id)description;
- (void).cxx_destruct;
- (id)initWithTopic:(id)a0;
- (id)asAccessoryTopic;
- (id)asAccessorySettingTopic;
- (id)asHomeEventTopic;

@end

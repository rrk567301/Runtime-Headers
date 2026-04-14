@class NSArray, NSString;

@interface SKAProfilePushTopic : NSObject {
    void /* unknown type, empty encoding */ topic;
    void /* unknown type, empty encoding */ isUltraConstrained;
    void /* unknown type, empty encoding */ maxSubscriptionCount;
}

@property (class, nonatomic, readonly) NSArray *allTopics;
@property (class, nonatomic, readonly) NSArray *ultraConstrainedTopics;

@property (nonatomic, readonly) NSString *description;

+ (id)namedWithTopic:(id)a0;

- (void).cxx_destruct;
- (id)init;

@end

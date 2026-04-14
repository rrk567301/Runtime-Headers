@class NSString;

@interface APSChannelSubscriptionFailure : NSObject

@property (retain, nonatomic) NSString *pushTopic;
@property (retain, nonatomic) NSString *channelID;
@property (nonatomic) int failureReason;

- (void).cxx_destruct;
- (id)description;

@end

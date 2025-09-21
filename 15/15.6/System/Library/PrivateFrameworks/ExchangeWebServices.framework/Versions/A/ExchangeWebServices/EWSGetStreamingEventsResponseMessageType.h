@class NSArray;

@interface EWSGetStreamingEventsResponseMessageType : EWSResponseMessageType

@property (copy, nonatomic) NSArray *Notifications;
@property (copy, nonatomic) NSArray *ErrorSubscriptionIds;
@property (nonatomic) char ConnectionStatus;

+ (id)definition;

- (void).cxx_destruct;

@end

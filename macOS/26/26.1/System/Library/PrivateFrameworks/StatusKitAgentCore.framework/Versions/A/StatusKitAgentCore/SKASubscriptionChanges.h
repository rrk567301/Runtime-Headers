@class NSArray;

@interface SKASubscriptionChanges : NSObject

@property (readonly, nonatomic) NSArray *statusUnsubscriptions;
@property (readonly, nonatomic) NSArray *presenceUnsubscriptions;
@property (readonly, nonatomic) NSArray *statusSubscriptions;
@property (readonly, nonatomic) NSArray *presenceSubscriptions;

+ (id)logger;

- (void).cxx_destruct;
- (id)channelsForAction:(unsigned long long)a0;
- (BOOL)hasSubscriptionChanges;
- (id)initWithStatusUnsubscriptions:(id)a0 presenceUnsubscriptions:(id)a1 statusSubscriptions:(id)a2 presenceSubscriptions:(id)a3;

@end

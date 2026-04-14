@class NSString, NSDate;

@interface SKADatabaseTransientSubscriptionHistory : NSObject

@property (readonly, nonatomic) NSString *channelIdentifier;
@property (readonly, nonatomic) NSDate *lastSubscriptionDate;

- (void).cxx_destruct;
- (id)initWithCoreDataTransientSubscriptionHistory:(id)a0;
- (id)initWithChannelIdentifier:(id)a0 lastSubscriptionDate:(id)a1;

@end

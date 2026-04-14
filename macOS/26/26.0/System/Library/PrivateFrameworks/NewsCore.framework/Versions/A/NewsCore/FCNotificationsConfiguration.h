@class NSArray;

@interface FCNotificationsConfiguration : NSObject

@property (readonly, copy, nonatomic) NSArray *preSubscribedNotificationsChannelIDs;
@property (readonly, copy, nonatomic) NSArray *recommendedNotificationChannelIDs;

- (id)initWithPresubscribedChannelIDs:(id)a0 recommendedNotificationChannelIDs:(id)a1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end

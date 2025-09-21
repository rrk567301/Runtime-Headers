@class NSString;

@interface FCRestorePaidSubscriptionItem : NSObject

@property (readonly, nonatomic) NSString *channelID;
@property (readonly, nonatomic) char isNewsAppPurchase;

- (void).cxx_destruct;
- (id)initWithChannelID:(id)a0 isNewsAppPurchase:(char)a1;

@end

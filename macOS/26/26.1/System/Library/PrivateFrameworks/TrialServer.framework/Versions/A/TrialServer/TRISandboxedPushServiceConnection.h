@class NSMutableArray;

@interface TRISandboxedPushServiceConnection : NSObject <TRIPushServiceChannelSubscribing>

@property (readonly, nonatomic) NSMutableArray *channels;

- (id)subscribedChannelIds;
- (void).cxx_destruct;
- (void)unsubscribeFromChannel:(id)a0;
- (void)subscribeToChannels:(id)a0;
- (id)init;
- (void)_persistSubscriptions;
- (id)_readPersistedSubscriptions;
- (void)_validateChannelForChannelId:(id)a0;

@end

@class NSMutableArray;

@interface TRISandboxedPushServiceConnection : NSObject <TRIPushServiceChannelSubscribing>

@property (readonly, nonatomic) NSMutableArray *channels;

- (id)init;
- (id)subscribedChannelIds;
- (void)unsubscribeFromChannel:(id)a0;
- (void)subscribeToChannels:(id)a0;
- (void).cxx_destruct;
- (void)_persistSubscriptions;
- (id)_readPersistedSubscriptions;
- (void)_validateChannelForChannelId:(id)a0;

@end

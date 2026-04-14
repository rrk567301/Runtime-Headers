@class NSMutableArray;

@interface TRISandboxedPushServiceConnection : NSObject <TRIPushServiceChannelSubscribing>

@property (readonly, nonatomic) NSMutableArray *channels;

- (void)unsubscribeFromChannel:(id)a0;
- (void).cxx_destruct;
- (id)subscribedChannelIds;
- (id)init;
- (void)subscribeToChannels:(id)a0;
- (void)_persistSubscriptions;
- (id)_readPersistedSubscriptions;
- (void)_validateChannelForChannelId:(id)a0;

@end

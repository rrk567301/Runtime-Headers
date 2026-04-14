@class NSMutableArray;

@interface TRISandboxedPushServiceConnection : NSObject <TRIPushServiceChannelSubscribing>

@property (readonly, nonatomic) NSMutableArray *channels;

- (id)subscribedChannelIds;
- (id)init;
- (void).cxx_destruct;
- (void)subscribeToChannels:(id)a0;
- (void)unsubscribeFromChannel:(id)a0;
- (void)_persistSubscriptions;
- (id)_readPersistedSubscriptions;
- (void)_validateChannelForChannelId:(id)a0;

@end

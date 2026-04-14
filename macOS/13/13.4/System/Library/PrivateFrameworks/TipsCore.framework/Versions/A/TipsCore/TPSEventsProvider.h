@protocol TPSEventsProviderDelegate;

@interface TPSEventsProvider : NSObject

@property (weak, nonatomic) id<TPSEventsProviderDelegate> delegate;

- (void).cxx_destruct;
- (void)deregisterAllEventsForCallback;
- (void)registerEventsForCallback:(id)a0;
- (void)deregisterEventsForCallback:(id)a0;
- (void)queryEvents:(id)a0;
- (void)registerEventsForWakingCallback:(id)a0 clientIdentifier:(id)a1;

@end

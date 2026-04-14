@class NSArray, SpotlightSenderState, NSDictionary;

@interface SpotlightReceiverConnectionManager : NSObject {
    SpotlightSenderState *_state;
    NSDictionary *_connections;
}

@property (copy, nonatomic) NSArray *connectionIdentifiers;

+ (id)sharedInstantManager;
+ (id)sharedScheduledManager;

- (id)clientConnection:(long long)a0;
- (id)clients;
- (void).cxx_destruct;
- (id)initWithConnectionInfo:(id)a0 configurationInfo:(id)a1;

@end

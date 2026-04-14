@class GEODaemon;

@interface GEOServer : NSObject

@property (weak, nonatomic) GEODaemon *daemon;

+ (id)identifier;
+ (unsigned long long)launchMode;
+ (Class)peerClass;

- (id)description;
- (void).cxx_destruct;
- (void)peerDidConnect:(id)a0;
- (BOOL)handleIncomingMessage:(id)a0 withObject:(id)a1 fromPeer:(id)a2;
- (void)peerDidDisconnect:(id)a0;

@end

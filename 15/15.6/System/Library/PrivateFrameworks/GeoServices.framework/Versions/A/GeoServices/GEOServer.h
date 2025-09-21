@class NSArray, GEODaemon;

@interface GEOServer : NSObject

@property (class, readonly, nonatomic) NSArray *possibleXPCActivityIdentifiers;
@property (class, readonly, nonatomic) char wantsPerMessageSignposts;

@property (readonly, weak, nonatomic) GEODaemon *daemon;

+ (id)identifier;
+ (unsigned long long)launchMode;
+ (Class)peerClass;
+ (unsigned int)throttleCount;
+ (double)throttleInterval;
+ (char)throttlingEnabled;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDaemon:(id)a0;
- (void)peerDidConnect:(id)a0;
- (void)runXPCActivity:(id)a0;
- (char)handleIncomingMessage:(id)a0 withObject:(id)a1 fromPeer:(id)a2 signpostId:(unsigned long long)a3;
- (void)peerDidDisconnect:(id)a0;

@end

@class NSArray, GEODaemon, NSObject;
@protocol OS_dispatch_queue;

@interface GEOServer : NSObject

@property (class, readonly, nonatomic) NSArray *possibleXPCActivityIdentifiers;
@property (class, readonly, nonatomic) BOOL wantsPerMessageSignposts;

@property (readonly, weak, nonatomic) GEODaemon *daemon;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageQueue;

+ (unsigned long long)launchMode;
+ (id)identifier;
+ (Class)peerClass;
+ (unsigned int)throttleCount;
+ (double)throttleInterval;
+ (BOOL)throttlingEnabled;

- (id)initWithDaemon:(id)a0;
- (void)peerDidConnect:(id)a0;
- (id)init;
- (void)runXPCActivity:(id)a0;
- (void)peerDidDisconnect:(id)a0;
- (id)description;
- (BOOL)handleIncomingMessage:(id)a0 withObject:(id)a1 fromPeer:(id)a2 signpostId:(unsigned long long)a3;
- (void).cxx_destruct;

@end

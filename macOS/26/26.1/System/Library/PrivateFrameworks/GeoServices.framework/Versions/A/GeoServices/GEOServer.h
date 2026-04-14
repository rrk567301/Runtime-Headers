@class NSArray, GEODaemon, NSObject;
@protocol OS_dispatch_queue;

@interface GEOServer : NSObject

@property (class, readonly, nonatomic) NSArray *possibleXPCActivityIdentifiers;
@property (class, readonly, nonatomic) BOOL wantsPerMessageSignposts;

@property (readonly, weak, nonatomic) GEODaemon *daemon;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageQueue;

+ (id)identifier;
+ (unsigned long long)launchMode;
+ (Class)peerClass;
+ (unsigned int)throttleCount;
+ (double)throttleInterval;
+ (BOOL)throttlingEnabled;

- (id)initWithDaemon:(id)a0;
- (BOOL)handleIncomingMessage:(id)a0 withObject:(id)a1 fromPeer:(id)a2 signpostId:(unsigned long long)a3;
- (id)description;
- (void).cxx_destruct;
- (void)peerDidConnect:(id)a0;
- (void)runXPCActivity:(id)a0;
- (void)peerDidDisconnect:(id)a0;
- (id)init;

@end

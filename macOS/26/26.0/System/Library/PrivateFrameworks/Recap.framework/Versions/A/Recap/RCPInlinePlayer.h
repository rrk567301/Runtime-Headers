@class RCPPlayer, NSObject;
@protocol OS_dispatch_queue;

@interface RCPInlinePlayer : NSObject

@property (retain, nonatomic) RCPPlayer *underlyingPlayer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *replayQueue;
@property (nonatomic) BOOL needsInitialDelay;
@property (nonatomic) BOOL ignoresCompletionDelay;

+ (id)sharedInstance;
+ (void)playEventStream:(id)a0 options:(id)a1 completion:(id /* block */)a2;
+ (void)playCommandString:(id)a0 options:(id)a1 completion:(id /* block */)a2;
+ (void)setNeedsInitialDelay;
+ (void)playEventActions:(id /* block */)a0 options:(id)a1 completion:(id /* block */)a2;
+ (void)setIgnoresCompletionDelay:(BOOL)a0;

- (void)tearDown;
- (void)_callBlock:(id /* block */)a0;
- (void)playEventStream:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)_doInitialDelayIfNeeded;
- (void)playCommandString:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)playEventActions:(id /* block */)a0 options:(id)a1 completion:(id /* block */)a2;
- (id)init;
- (void).cxx_destruct;
- (void)prewarmForEventStream:(id)a0 completion:(id /* block */)a1;

@end

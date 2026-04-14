@class NSObject;
@protocol GTMTLReplayService, OS_dispatch_semaphore;

@interface GTReplayRequestToken : NSObject {
    NSObject<OS_dispatch_semaphore> *_finished;
    id<GTMTLReplayService> _replayer;
}

@property (readonly, nonatomic) unsigned long long tokenId;

- (void)completed;
- (BOOL)resume;
- (BOOL)pause;
- (BOOL)cancel;
- (void).cxx_destruct;
- (void)waitUntilCompleted;
- (id)initWithService:(id)a0 andTokenId:(unsigned long long)a1;

@end

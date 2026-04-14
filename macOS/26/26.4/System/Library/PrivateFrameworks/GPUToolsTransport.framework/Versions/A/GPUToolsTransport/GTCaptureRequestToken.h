@class NSObject;
@protocol GTMTLCaptureService, OS_dispatch_semaphore;

@interface GTCaptureRequestToken : NSObject {
    NSObject<OS_dispatch_semaphore> *_finished;
    id<GTMTLCaptureService> _service;
}

@property (readonly, nonatomic) unsigned long long tokenId;

- (void)completed;
- (void).cxx_destruct;
- (id)description;
- (void)waitUntilCompleted;
- (id)initWithCaptureService:(id)a0 andTokenId:(unsigned long long)a1;

@end

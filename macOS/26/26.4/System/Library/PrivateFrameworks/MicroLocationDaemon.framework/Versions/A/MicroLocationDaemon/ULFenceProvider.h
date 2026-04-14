@class ULPDRFenceBridge, NSObject, ULCMFenceBridge;
@protocol OS_dispatch_queue;

@interface ULFenceProvider : NSObject

@property (retain, nonatomic) ULPDRFenceBridge *pdrFenceProvider;
@property (retain, nonatomic) ULCMFenceBridge *cmpdrFenceProvider;
@property (nonatomic) long long fenceType;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)endSession;
- (void)setFenceRadius:(id)a0;
- (void)startSession;
- (void)clearFence;
- (id)initWithFenceIdentifier:(id)a0 odometryMonitor:(id)a1 queue:(id)a2 radiusInMeters:(id)a3 callback:(id /* block */)a4 errorCallback:(id /* block */)a5;
- (void)setFence;

@end

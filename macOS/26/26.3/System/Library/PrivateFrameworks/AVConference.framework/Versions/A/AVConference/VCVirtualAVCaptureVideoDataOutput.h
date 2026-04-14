@class VCWeakObjectHolder, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface VCVirtualAVCaptureVideoDataOutput : AVCaptureVideoDataOutput {
    NSMutableArray *_connections;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    VCWeakObjectHolder *_weakPushDelegate;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
}

- (void)addConnection:(id)a0;
- (void)disconnect;
- (id)connections;
- (void)removeConnection:(id)a0;
- (id)init;
- (void)dealloc;
- (id)connectionWithMediaType:(id)a0;
- (void)setSampleBufferDelegate:(id)a0 queue:(id)a1;

@end

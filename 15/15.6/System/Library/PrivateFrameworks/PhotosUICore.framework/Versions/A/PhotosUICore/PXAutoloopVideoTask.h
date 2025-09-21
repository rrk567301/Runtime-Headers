@class NSError, NSString, NSObject;
@protocol PXAutoloopVideoTaskDelegate, OS_dispatch_queue;

@interface PXAutoloopVideoTask : NSObject {
    NSObject<OS_dispatch_queue> *_performQueue;
    NSObject<OS_dispatch_queue> *_ivarQueue;
    void *_ivarQueueIdentifier;
    id<PXAutoloopVideoTaskDelegate> _ivarQueue_delegate;
    long long _ivarQueue_status;
    double _ivarQueue_progress;
    NSError *_ivarQueue_error;
    struct { char respondsToProgressDidChange; char respondsToStatusDidChange; } _ivarQueue_delegateFlags;
}

@property (weak, nonatomic) id<PXAutoloopVideoTaskDelegate> delegate;
@property (readonly, nonatomic) double progress;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) NSError *error;
@property (readonly, copy, nonatomic) NSString *temporaryFilesDirectory;

- (id)init;
- (void).cxx_destruct;
- (void)setError:(id)a0;
- (void)_reset;
- (void)cancel;
- (void)setProgress:(double)a0;
- (void)setStatus:(long long)a0;
- (char)_isRunning;
- (void)runWithInput:(id)a0;
- (char)_isOnIvarQueue;
- (void)_performIvarRead:(id /* block */)a0;
- (void)_performIvarWrite:(id /* block */)a0;
- (void)performTaskWithInput:(id)a0;
- (void)setTemporaryFilesDirectory:(id)a0;

@end

@class CUBLEAdvertiser, NSObject;
@protocol OS_dispatch_queue;

@interface CUOSRecoveryTarget : NSObject {
    BOOL _activateCalled;
    CUBLEAdvertiser *_bleAdvertiser;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ progressHandler;

- (id)init;
- (void)_activate;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_invalidate;
- (void)_invalidated;
- (void)activate;
- (void)_reportProgressType:(int)a0;

@end

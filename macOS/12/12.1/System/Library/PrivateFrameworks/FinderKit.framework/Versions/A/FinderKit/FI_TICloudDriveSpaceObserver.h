@class NSOperationQueue, NSTimer;

@interface FI_TICloudDriveSpaceObserver : NSObject {
    NSOperationQueue *_operationQueue;
    NSTimer *_pollingTimer;
    BOOL _mainAccount;
    struct TSpinLock { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } fSpinLock; } _lock;
}

@property (nonatomic) long long freeSpace;

+ (id)iCloudDriveObserver;
+ (id)iCloudDriveDataSeparatedObserver;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)startObserving;
- (void)stopObserving;
- (id)_init:(BOOL)a0;
- (void)fetchFreeSpace;

@end

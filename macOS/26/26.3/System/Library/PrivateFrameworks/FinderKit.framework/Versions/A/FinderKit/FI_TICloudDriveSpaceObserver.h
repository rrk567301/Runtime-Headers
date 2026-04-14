@class NSOperationQueue, NSTimer;

@interface FI_TICloudDriveSpaceObserver : NSObject {
    NSOperationQueue *_operationQueue;
    NSTimer *_pollingTimer;
    BOOL _mainAccount;
    struct TSpinLock { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } fSpinLock; } _lock;
}

@property (nonatomic) long long freeSpace;

+ (id)iCloudDriveDataSeparatedObserver;
+ (id)iCloudDriveObserver;

- (void)stopObserving;
- (void)startObserving;
- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (id)_init:(int)a0;
- (void)fetchFreeSpace;

@end

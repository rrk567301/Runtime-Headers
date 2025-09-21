@class NSProgress;

@interface PLAtomicProgressIvar : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSProgress *_lock_currentProgress;
}

@property (retain) NSProgress *progress;

- (void)cancel;
- (id)init;
- (void).cxx_destruct;

@end

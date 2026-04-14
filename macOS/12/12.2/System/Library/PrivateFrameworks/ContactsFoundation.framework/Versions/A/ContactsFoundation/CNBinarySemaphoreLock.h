@class NSString, NSObject;
@protocol OS_dispatch_semaphore;

@interface CNBinarySemaphoreLock : NSObject <NSLocking> {
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

@property (copy) NSString *name;

- (void)dealloc;
- (id)description;
- (id)init;
- (void)lock;
- (void)invalidate;
- (void).cxx_destruct;
- (void)unlock;

@end

@class NSString, NSObject;
@protocol OS_dispatch_semaphore;

@interface CNBinarySemaphoreLock : NSObject <NSLocking> {
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

@property (copy) NSString *name;

- (void)invalidate;
- (void)unlock;
- (void).cxx_destruct;
- (id)description;
- (void)lock;
- (id)init;
- (void)dealloc;

@end

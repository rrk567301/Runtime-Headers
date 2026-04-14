@class NSString, NSObject;
@protocol OS_dispatch_semaphore;

@interface CNBinarySemaphoreLock : NSObject <NSLocking> {
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

@property (copy) NSString *name;

- (void)unlock;
- (void)dealloc;
- (void)invalidate;
- (void)lock;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end

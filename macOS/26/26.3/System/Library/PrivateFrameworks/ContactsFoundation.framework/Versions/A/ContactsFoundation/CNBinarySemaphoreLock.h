@class NSString, NSObject;
@protocol OS_dispatch_semaphore;

@interface CNBinarySemaphoreLock : NSObject <NSLocking> {
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

@property (copy) NSString *name;

- (void)invalidate;
- (id)description;
- (id)init;
- (void)unlock;
- (void).cxx_destruct;
- (void)lock;
- (void)dealloc;

@end

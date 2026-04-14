@class NSString, NSObject;
@protocol OS_dispatch_semaphore;

@interface CNBinarySemaphoreLock : NSObject <NSLocking> {
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

@property (copy) NSString *name;

- (void)unlock;
- (void).cxx_destruct;
- (void)invalidate;
- (id)init;
- (id)description;
- (void)lock;
- (void)dealloc;

@end

@interface HMFUnfairLock : HMFObject <HMFLocking>

@property (readonly) unsigned long long options;

+ (id)lock;
+ (id)lockWithOptions:(unsigned long long)a0;

- (void)unlock;
- (void)performBlock:(id /* block */)a0;
- (id)initWithOptions:(unsigned long long)a0;
- (void)assertNotOwner;
- (void)lock;
- (void)assertOwner;
- (id)init;

@end

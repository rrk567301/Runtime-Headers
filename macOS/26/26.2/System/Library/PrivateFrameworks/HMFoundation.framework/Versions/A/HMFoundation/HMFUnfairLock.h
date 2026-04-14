@interface HMFUnfairLock : HMFObject <HMFLocking>

@property (readonly) unsigned long long options;

+ (id)lock;
+ (id)lockWithOptions:(unsigned long long)a0;

- (void)unlock;
- (void)assertNotOwner;
- (id)initWithOptions:(unsigned long long)a0;
- (void)assertOwner;
- (void)lock;
- (id)init;
- (void)performBlock:(id /* block */)a0;

@end

@interface HMFUnfairLock : HMFObject <HMFLocking>

@property (readonly) unsigned long long options;

+ (id)lock;
+ (id)lockWithOptions:(unsigned long long)a0;

- (id)initWithOptions:(unsigned long long)a0;
- (id)init;
- (void)performBlock:(id /* block */)a0;
- (void)unlock;
- (void)lock;
- (void)assertNotOwner;
- (void)assertOwner;

@end

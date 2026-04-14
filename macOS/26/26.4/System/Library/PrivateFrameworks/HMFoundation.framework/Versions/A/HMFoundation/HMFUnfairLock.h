@interface HMFUnfairLock : HMFObject <HMFLocking>

@property (readonly) unsigned long long options;

+ (id)lock;
+ (id)lockWithOptions:(unsigned long long)a0;

- (void)unlock;
- (void)assertOwner;
- (void)assertNotOwner;
- (id)initWithOptions:(unsigned long long)a0;
- (void)performBlock:(id /* block */)a0;
- (id)init;
- (void)lock;

@end

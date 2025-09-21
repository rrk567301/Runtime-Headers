@interface WFCompactUnlockService : NSObject

@property (class, readonly, nonatomic) char isDeviceLocked;

- (void)dealloc;
- (void)requestUnlockIfNeeded:(id /* block */)a0;

@end

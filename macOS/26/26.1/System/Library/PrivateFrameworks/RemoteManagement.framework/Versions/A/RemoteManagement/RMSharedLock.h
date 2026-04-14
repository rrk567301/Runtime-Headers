@class NSString, NSConditionLock;

@interface RMSharedLock : NSObject {
    NSConditionLock *_lock;
}

@property (copy, nonatomic) NSString *lockTitle;

+ (id)newSharedLockWithDescription:(id)a0;

- (void)unlock;
- (id)initWithDescription:(id)a0;
- (void)lock;
- (void).cxx_destruct;
- (void)performBlockUnderLock:(id /* block */)a0;

@end

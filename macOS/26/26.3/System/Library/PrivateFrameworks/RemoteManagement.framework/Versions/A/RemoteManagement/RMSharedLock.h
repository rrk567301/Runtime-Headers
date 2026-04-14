@class NSString, NSConditionLock;

@interface RMSharedLock : NSObject {
    NSConditionLock *_lock;
}

@property (copy, nonatomic) NSString *lockTitle;

+ (id)newSharedLockWithDescription:(id)a0;

- (id)initWithDescription:(id)a0;
- (void)unlock;
- (void).cxx_destruct;
- (void)lock;
- (void)performBlockUnderLock:(id /* block */)a0;

@end

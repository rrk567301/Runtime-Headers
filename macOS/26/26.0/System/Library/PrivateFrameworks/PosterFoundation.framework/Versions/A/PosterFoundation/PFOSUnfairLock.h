@class NSString, NSDictionary, NSMutableDictionary;

@interface PFOSUnfairLock : NSObject <NSLocking> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSString *_lockIdentifier;
    NSMutableDictionary *_userInfo;
}

@property (readonly, copy, nonatomic) NSString *lockIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *userInfo;

- (void)unlock;
- (void)assertNotOwner;
- (void)dealloc;
- (void)performBlock:(id /* block */)a0;
- (void)lock;
- (id)init;
- (id)description;
- (void)assertOwner;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithLockIdentifier:(id)a0;
- (BOOL)mutateUserInfo:(id /* block */)a0;
- (void)performBlockWhileCapturingWeak:(id)a0 performBlock:(id /* block */)a1;

@end

@class NSString, NSDictionary, NSMutableDictionary;

@interface PFOSUnfairLock : NSObject <NSLocking> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSString *_lockIdentifier;
    NSMutableDictionary *_userInfo;
}

@property (readonly, copy, nonatomic) NSString *lockIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *userInfo;

- (id)description;
- (id)init;
- (void)performBlock:(id /* block */)a0;
- (void)unlock;
- (void).cxx_destruct;
- (void)lock;
- (void)dealloc;
- (void)assertNotOwner;
- (BOOL)isEqual:(id)a0;
- (void)assertOwner;
- (id)initWithLockIdentifier:(id)a0;
- (BOOL)mutateUserInfo:(id /* block */)a0;
- (void)performBlockWhileCapturingWeak:(id)a0 performBlock:(id /* block */)a1;

@end

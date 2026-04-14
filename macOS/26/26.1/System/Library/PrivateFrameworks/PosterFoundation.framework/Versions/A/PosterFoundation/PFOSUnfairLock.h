@class NSString, NSDictionary, NSMutableDictionary;

@interface PFOSUnfairLock : NSObject <NSLocking> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSString *_lockIdentifier;
    NSMutableDictionary *_userInfo;
}

@property (readonly, copy, nonatomic) NSString *lockIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *userInfo;

- (void)unlock;
- (void)performBlock:(id /* block */)a0;
- (void)assertNotOwner;
- (void)lock;
- (void)assertOwner;
- (id)description;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithLockIdentifier:(id)a0;
- (BOOL)mutateUserInfo:(id /* block */)a0;
- (void)performBlockWhileCapturingWeak:(id)a0 performBlock:(id /* block */)a1;

@end

@class NSString, NSLock;

@interface MMAOSKeychainWrapper : NSObject {
    NSString *_accountName;
    NSString *_serviceName;
    NSLock *_lock;
    char _userCanceledKeychainUnlock;
}

+ (id)keychainWrapperWithAccountName:(id)a0 serviceName:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (id)lock;
- (id)serviceName;
- (void)setServiceName:(id)a0;
- (id)accountName;
- (void)setLock:(id)a0;
- (void)setAccountName:(id)a0;
- (id)genericPassword;
- (int)addGenericPasswordWithAttributes:(id)a0 data:(id)a1;
- (id)genericPasswordAndItemRef:(struct __SecKeychainItem **)a0;
- (id)getAttributesForKeys:(id)a0;
- (id)initWithAccountName:(id)a0 serviceName:(id)a1;
- (void)removeGenericPassword;
- (void)setUserCanceledKeychainUnlock:(char)a0;
- (char)userCanceledKeychainUnlock;

@end

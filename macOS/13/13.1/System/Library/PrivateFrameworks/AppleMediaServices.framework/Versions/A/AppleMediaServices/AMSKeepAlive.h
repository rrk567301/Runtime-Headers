@class NSString, NSObject, RBSAssertion;
@protocol OS_os_transaction;

@interface AMSKeepAlive : NSObject {
    NSObject<OS_os_transaction> *_transaction;
    NSString *_logKey;
}

@property (retain) RBSAssertion *rbsAssertion;
@property (readonly) NSString *name;
@property (readonly) long long style;

+ (id)keepAliveWithFormat:(id)a0;
+ (id)keepAliveWithName:(id)a0;
+ (id)keepAliveWithName:(id)a0 style:(long long)a1;
+ (void)keepAliveWithName:(id)a0 style:(long long)a1 block:(id /* block */)a2;
+ (id)rbs_keepAliveWithName:(id)a0;
+ (id)rbs_keepAliveWithName:(id)a0 style:(long long)a1;
+ (void)rbs_keepAliveWithName:(id)a0 style:(long long)a1 block:(id /* block */)a2;
+ (void)_accessAssertionCache:(id /* block */)a0;
+ (void)_handleAssertionExpiration;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id)_cacheKey;
- (id)initWithName:(id)a0 style:(long long)a1;
- (id)initRBSWithName:(id)a0;
- (id)initRBSWithName:(id)a0 style:(long long)a1;
- (void)rbs_invalidate;
- (id)_assertionName;
- (void)_removeOSTransaction;
- (void)_removeProcessAssertion;
- (void)_removeRBSAssertion;
- (void)_startLogTimer;
- (void)_startRBSLogTimer;
- (void)_takeOSTransaction;
- (void)_takeProcessAssertion;
- (void)_takeRBSAssertion;

@end

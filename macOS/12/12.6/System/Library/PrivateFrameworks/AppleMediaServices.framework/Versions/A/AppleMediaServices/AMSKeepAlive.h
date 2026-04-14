@class NSString, NSObject;
@protocol OS_os_transaction;

@interface AMSKeepAlive : NSObject {
    NSObject<OS_os_transaction> *_transaction;
    NSString *_logKey;
}

@property (readonly) NSString *name;
@property (readonly) long long style;

+ (id)keepAliveWithName:(id)a0;
+ (id)keepAliveWithName:(id)a0 style:(long long)a1;
+ (void)_accessAssertionCache:(id /* block */)a0;
+ (id)keepAliveWithFormat:(id)a0;
+ (void)keepAliveWithName:(id)a0 style:(long long)a1 block:(id /* block */)a2;
+ (void)_handleAssertionExpiration;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id)_cacheKey;
- (id)initWithName:(id)a0 style:(long long)a1;
- (void)_takeOSTransaction;
- (void)_takeProcessAssertion;
- (void)_startLogTimer;
- (void)_removeProcessAssertion;
- (void)_removeOSTransaction;
- (id)_assertionName;

@end

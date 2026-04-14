@class NSString, AMSRBSKeepAlive, NSObject;
@protocol OS_os_transaction;

@interface AMSKeepAlive : NSObject {
    NSObject<OS_os_transaction> *_transaction;
    NSString *_logKey;
    AMSRBSKeepAlive *_rbsKeepAlive;
}

@property (readonly) NSString *name;
@property (readonly) long long style;

+ (void)rbs_keepAliveWithName:(id)a0 style:(long long)a1 qosOverrideIfRBManaged:(unsigned int)a2 relativePriority:(long long)a3 block:(id /* block */)a4;
+ (id)keepAliveWithFormat:(id)a0;
+ (id)rbs_keepAliveWithName:(id)a0 style:(long long)a1;
+ (id)keepAliveWithName:(id)a0 style:(long long)a1;
+ (id)rbs_keepAliveWithName:(id)a0;
+ (void)keepAliveWithName:(id)a0 style:(long long)a1 block:(id /* block */)a2;
+ (id)keepAliveWithName:(id)a0;
+ (void)rbs_keepAliveWithName:(id)a0 style:(long long)a1 block:(id /* block */)a2;

- (void)invalidate;
- (id)initWithName:(id)a0;
- (id)initWithName:(id)a0 style:(long long)a1;
- (void).cxx_destruct;
- (void)rbs_invalidate;
- (id)initRBSWithName:(id)a0;
- (id)initRBSWithName:(id)a0 style:(long long)a1;

@end

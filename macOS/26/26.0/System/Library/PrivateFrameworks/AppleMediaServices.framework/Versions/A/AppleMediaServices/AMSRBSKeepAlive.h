@class NSString;

@interface AMSRBSKeepAlive : NSObject {
    void /* unknown type, empty encoding */ keepAlive;
    void /* function */ name;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long style;

+ (void)keepAliveWithName:(id)a0 style:(long long)a1 block:(id /* block */)a2;
+ (id)keepAliveWithName:(id)a0 style:(long long)a1;
+ (id)keepAliveWithName:(id)a0;
+ (void)keepAliveWithName:(id)a0 style:(long long)a1 qosOverrideIfRBManaged:(unsigned int)a2 relativePriority:(long long)a3 block:(id /* block */)a4;

- (void)invalidate;
- (id)init;
- (void).cxx_destruct;

@end

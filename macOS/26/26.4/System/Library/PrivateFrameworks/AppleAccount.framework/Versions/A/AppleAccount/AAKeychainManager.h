@interface AAKeychainManager : NSObject

+ (void)initialize;
+ (void)setPassword:(id)a0 forServiceName:(id)a1 username:(id)a2 accessGroup:(id)a3;
+ (void)removePasswordForService:(id)a0 username:(id)a1 accessGroup:(id)a2;
+ (id)passwordForServiceName:(id)a0 username:(id)a1 accessGroup:(id)a2;

@end

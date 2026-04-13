@class NSXPCConnection;

@interface TKLocalSEPKey : TKSEPKey

@property (retain, nonatomic) id sac;
@property (retain, nonatomic) NSXPCConnection *caller;

+ (BOOL)hasSEP;
+ (BOOL)isDaytona;
+ (BOOL)isGibraltar;
+ (void)setupKeybagForTesting:(BOOL)a0;
+ (void)setContextErrorHandler:(id /* block */)a0;
+ (int)_eosDeviceType;
+ (int)keybagHandle;
+ (id)protectionForKeyClass:(int)a0;
+ (int)keyClassForProtection:(id)a0;

- (void).cxx_destruct;
- (struct __SecAccessControl { } *)accessControl;
- (id)_initWithObjectID:(id)a0 authContext:(id)a1 error:(id *)a2;
- (id)_initWithKeyType:(id)a0 keySize:(long long)a1 accessControl:(struct __SecAccessControl { } *)a2 options:(id)a3 authContext:(id)a4 error:(id *)a5;
- (BOOL)systemKey;
- (id)parametersWithACMHandle:(id)a0;
- (BOOL)error:(id *)a0 withAKSReturn:(int)a1 ACMHandle:(id)a2 AKSOperation:(id)a3 message:(id)a4;
- (id)authContextWithError:(id *)a0;
- (BOOL)callerHasEntitlement:(id)a0 error:(id *)a1;

@end

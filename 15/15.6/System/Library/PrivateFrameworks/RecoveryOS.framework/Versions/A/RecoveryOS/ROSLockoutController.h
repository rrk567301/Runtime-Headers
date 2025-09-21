@class NSLock, NSXPCConnection;

@interface ROSLockoutController : NSObject

@property (retain, nonatomic) NSXPCConnection *serviceConnection;
@property (retain, nonatomic) NSLock *serviceConnectionLock;
@property (nonatomic) char systemLockoutEnabled;
@property (nonatomic) char recoveryLockoutEnabled;

+ (id)LogObject;
+ (char)lockoutControllerSupported;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_serviceConnection;
- (char)_pingPongService;
- (char)removeRecoveryPasswordWithError:(id *)a0;
- (char)setRecoveryLockWithPassword:(id)a0 withError:(id *)a1;
- (char)setSystemLockWithPIN:(id)a0 withPhoneNumber:(id)a1 withInformationalMessage:(id)a2 withError:(id *)a3;
- (id)systemLockSettings;
- (char)validateRecoveryLockPassword:(id)a0 removeOnVerification:(char)a1 withError:(id *)a2;
- (char)validateSystemLockPIN:(id)a0 removeLockIfPINValidates:(char)a1 withNextRetryDate:(id *)a2 withError:(id *)a3;

@end

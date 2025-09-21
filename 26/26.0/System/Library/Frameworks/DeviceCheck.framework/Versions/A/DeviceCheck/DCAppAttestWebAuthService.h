@class DCAppAttestController;

@interface DCAppAttestWebAuthService : NSObject

@property (class, readonly) DCAppAttestWebAuthService *sharedService;

@property (retain, nonatomic) DCAppAttestController *appAttestController;
@property (readonly, getter=isSupported) BOOL supported;

- (BOOL)hasEntitlement;
- (void).cxx_destruct;
- (void)attestKey:(struct __SecKey { } *)a0 clientDataHash:(id)a1 authData:(id)a2 completionHandler:(id /* block */)a3;

@end

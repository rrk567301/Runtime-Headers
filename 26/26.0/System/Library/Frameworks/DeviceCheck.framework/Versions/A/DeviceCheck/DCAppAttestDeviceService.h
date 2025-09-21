@class DCAppAttestController;

@interface DCAppAttestDeviceService : NSObject

@property (class, readonly) DCAppAttestDeviceService *sharedService;

@property (retain, nonatomic) DCAppAttestController *appAttestController;
@property (readonly, getter=isSupported) BOOL supported;

- (BOOL)hasEntitlement;
- (void).cxx_destruct;
- (void)attestKey:(struct __SecKey { } *)a0 clientDataHash:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;

@end

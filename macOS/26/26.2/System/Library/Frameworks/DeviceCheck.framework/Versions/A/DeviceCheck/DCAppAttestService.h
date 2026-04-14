@class DCAppAttestController;

@interface DCAppAttestService : NSObject

@property (class, readonly) DCAppAttestService *sharedService;

@property (retain, nonatomic) DCAppAttestController *appAttestController;
@property (readonly, getter=isSupported) BOOL supported;

- (void)generateAssertion:(id)a0 clientDataHash:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)attestKey:(id)a0 clientDataHash:(id)a1 completionHandler:(id /* block */)a2;
- (void)generateKeyWithCompletionHandler:(id /* block */)a0;

@end

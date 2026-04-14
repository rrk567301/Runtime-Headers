@class NSDictionary, ACAccount;

@interface AKPDPBlobGenerationHook : NSObject

@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) NSDictionary *additionalPayload;

- (id)initWithAccount:(id)a0;
- (void).cxx_destruct;
- (id)_extractPasswordFromClientInfo:(id)a0 postbackDictionary:(id)a1;
- (id)_getAuthKitAccountForCurrentiCloudAccountWithError:(id *)a0;
- (void)_processPasswordCollection:(id)a0 clientInfo:(id)a1 completion:(id /* block */)a2;
- (void)_setResponsePayloadWithContext:(id)a0 pdpBlob:(id)a1;
- (void)processClientInfo:(id)a0 postbackDictionary:(id)a1 completion:(id /* block */)a2;

@end

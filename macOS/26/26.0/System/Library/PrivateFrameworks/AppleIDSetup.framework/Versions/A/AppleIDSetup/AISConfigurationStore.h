@class NSError, AISChildAccountCutOffAgeResponse;

@interface AISConfigurationStore : NSObject <AISChildSetupStoreProtocol>

@property (nonatomic, retain) AISChildAccountCutOffAgeResponse *cachedChildCutOffResponse;

- (id)init;
- (void).cxx_destruct;
- (void)fetchMaxAgeForChildAccountWithCompletionHandler:(void (^)(AISChildAccountCutOffAgeResponse *, NSError *))a0;

@end

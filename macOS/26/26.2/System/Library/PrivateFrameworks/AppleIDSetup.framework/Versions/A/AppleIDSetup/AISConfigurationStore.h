@class NSError, AISChildAccountCutOffAgeResponse;

@interface AISConfigurationStore : NSObject <AISChildSetupStoreProtocol>

@property (nonatomic, retain) AISChildAccountCutOffAgeResponse *cachedChildCutOffResponse;

- (void).cxx_destruct;
- (id)init;
- (void)fetchMaxAgeForChildAccountWithCompletionHandler:(void (^)(AISChildAccountCutOffAgeResponse *, NSError *))a0;

@end

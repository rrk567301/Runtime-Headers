@class NSDictionary;

@interface IDSKeyTransparencyManager : NSObject

@property (retain, nonatomic) NSDictionary *applicationToVerificationInfoProviders;

- (id)init;
- (void).cxx_destruct;
- (void)getKeyTransparencyOptInEligiblityForApplication:(id)a0 withCompletion:(id /* block */)a1;
- (void)sendOptInUpdateForApplications:(id)a0 withCompletion:(id /* block */)a1;
- (id)verificationInfoProviderForApplication:(id)a0;
- (id)verificationInfoProviderIdForApplication:(id)a0;
- (void)sendOptInUpdateForApplicationsOptInState:(id)a0 withCompletion:(id /* block */)a1;

@end

@class _CDContextualChangeRegistration, _CDClientContext;

@interface WFCDContextualChangeRegistration : NSObject

@property (retain, nonatomic) _CDClientContext *clientContext;
@property (retain, nonatomic) _CDContextualChangeRegistration *changeRegistration;

- (void).cxx_destruct;
- (void)localWakingRegistrationWithIdentifier:(id)a0 forIntentKey:(id)a1 bundleIdentifiers:(id)a2 callback:(id /* block */)a3;

@end

@class LAContext;

@interface SUOSUAuthenticationManager : NSObject

@property (retain) LAContext *localAuthenticationContext;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_isManaged;
- (BOOL)localAuthenticationRequired;
- (BOOL)evaluateLocalAuthenticationPolicyWithContext:(id)a0 username:(id)a1 uid:(unsigned int)a2 password:(id)a3 prompt:(id)a4;
- (void)updateLocalAuthenticationContextWithExternalizedContext:(id)a0;
- (BOOL)evaluateLocalAuthenticationPolicyWithContext:(id)a0 username:(id)a1 uid:(unsigned int)a2 password:(id)a3 prompt:(id)a4 mdmInitiated:(BOOL)a5;
- (id)externalizedContextData;
- (BOOL)bootstrapTokenAvailable;

@end

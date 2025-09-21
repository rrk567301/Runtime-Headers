@class POConfigurationCoreManager, POAgentAuthenticationProcess, PORegistrationManager, POBuddyRegistrationContext;

@interface POBuddyManager : NSObject

@property (retain) PORegistrationManager *registrationManager;
@property (retain) POAgentAuthenticationProcess *agentAuthenticationProcess;
@property (readonly) POConfigurationCoreManager *configurationManager;
@property (retain, nonatomic) POBuddyRegistrationContext *context;
@property (nonatomic) BOOL registrationCompleted;

- (id)init;
- (void).cxx_destruct;
- (BOOL)parseSSOTokens:(id)a0;
- (void)saveSSODataToContext:(id)a0 encryptedTokens:(id)a1 loginUserName:(id)a2 tokenId:(id)a3 tokenHash:(id)a4 wrapTokenHash:(id)a5;

@end

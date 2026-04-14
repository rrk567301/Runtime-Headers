@class NSMutableDictionary;

@interface IMSimulatedAccountController : IMAccountController {
    NSMutableDictionary *_simulatedAccountsPerService;
}

- (id)init;
- (void).cxx_destruct;
- (id)activeIMessageAccount;
- (id)activeSMSAccount;
- (id)activeAccounts;
- (void)setSimulatedAccounts:(id)a0 forServiceNamed:(id)a1;

@end

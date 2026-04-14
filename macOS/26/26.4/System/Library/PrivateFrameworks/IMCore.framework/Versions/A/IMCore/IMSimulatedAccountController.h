@class NSMutableDictionary;

@interface IMSimulatedAccountController : IMAccountController {
    NSMutableDictionary *_simulatedAccountsPerService;
}

- (id)activeAccounts;
- (void).cxx_destruct;
- (id)init;
- (id)activeIMessageAccount;
- (id)activeSMSAccount;
- (void)setSimulatedAccounts:(id)a0 forServiceNamed:(id)a1;

@end

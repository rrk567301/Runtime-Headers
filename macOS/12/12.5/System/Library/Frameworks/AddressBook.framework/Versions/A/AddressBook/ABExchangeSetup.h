@interface ABExchangeSetup : NSObject

+ (id)sharedExchangeSetup;

- (id)init;
- (void)setUseSSL:(BOOL)a0;
- (BOOL)useSSL;
- (id)_dictionaryFromUser:(id)a0;
- (id)_ADKeySet;
- (BOOL)usingActiveDirectory;
- (id)outlookWebAccessServer;
- (void)setOutlookWebAccessPath:(id)a0;
- (void)setOutlookWebAccessServer:(id)a0;
- (id)activeDirectoryUser;
- (id)outlookWebAccessPathFromUserString:(id)a0 withUserName:(id)a1;
- (BOOL)syncsWithExchange;
- (void)setSyncsWithExchange:(BOOL)a0;
- (id)exchangeServer;
- (void)setExchangeServer:(id)a0;
- (id)outlookWebAccessPath;
- (void)setActiveDirectoryUser:(id)a0;
- (id)activeDirectoryPassword;
- (BOOL)setActiveDirectoryPassword:(id)a0;
- (id)activeDirectoryFullName;
- (id)activeDirectoryEmailAddress;

@end

@interface ABExchangeSetup : NSObject

+ (id)sharedExchangeSetup;

- (id)init;
- (void)setUseSSL:(BOOL)a0;
- (BOOL)useSSL;
- (id)_dictionaryFromUser:(id)a0;
- (id)_ADKeySet;
- (BOOL)usingActiveDirectory;
- (BOOL)syncsWithExchange;
- (void)setSyncsWithExchange:(BOOL)a0;
- (id)exchangeServer;
- (void)setExchangeServer:(id)a0;
- (id)outlookWebAccessServer;
- (void)setOutlookWebAccessServer:(id)a0;
- (id)outlookWebAccessPath;
- (id)outlookWebAccessPathFromUserString:(id)a0 withUserName:(id)a1;
- (void)setOutlookWebAccessPath:(id)a0;
- (id)activeDirectoryUser;
- (void)setActiveDirectoryUser:(id)a0;
- (id)activeDirectoryPassword;
- (BOOL)setActiveDirectoryPassword:(id)a0;
- (id)activeDirectoryFullName;
- (id)activeDirectoryEmailAddress;

@end

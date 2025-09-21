@interface ABExchangeSetup : NSObject

+ (id)sharedExchangeSetup;

- (id)init;
- (void)setUseSSL:(char)a0;
- (char)useSSL;
- (id)_ADKeySet;
- (id)_dictionaryFromUser:(id)a0;
- (id)activeDirectoryEmailAddress;
- (id)activeDirectoryFullName;
- (id)activeDirectoryPassword;
- (id)activeDirectoryUser;
- (id)exchangeServer;
- (id)outlookWebAccessPath;
- (id)outlookWebAccessPathFromUserString:(id)a0 withUserName:(id)a1;
- (id)outlookWebAccessServer;
- (char)setActiveDirectoryPassword:(id)a0;
- (void)setActiveDirectoryUser:(id)a0;
- (void)setExchangeServer:(id)a0;
- (void)setOutlookWebAccessPath:(id)a0;
- (void)setOutlookWebAccessServer:(id)a0;
- (void)setSyncsWithExchange:(char)a0;
- (char)syncsWithExchange;
- (char)usingActiveDirectory;

@end

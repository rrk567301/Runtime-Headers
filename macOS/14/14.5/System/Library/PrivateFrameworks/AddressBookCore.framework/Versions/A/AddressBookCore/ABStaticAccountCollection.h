@class NSString, ABAccount, NSArray;

@interface ABStaticAccountCollection : NSObject <ABAccountCollection> {
    NSString *_basePath;
    NSArray *_accounts;
    unsigned long long _indexOfDefaultAccount;
}

@property (copy) NSString *tag;
@property (readonly, copy) NSString *basePath;
@property (readonly) ABAccount *defaultAccount;
@property (readonly, copy) NSArray *allAccounts;
@property (readonly, copy) NSArray *enabledAccounts;
@property (readonly, copy) NSArray *persistentAccounts;
@property (readonly, copy) NSArray *hiddenAccounts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)collectionWithBasePath:(id)a0 accounts:(id)a1;

- (void)dealloc;
- (id)accountWithIdentifier:(id)a0;
- (id)initWithBasePath:(id)a0 accounts:(id)a1 indexOfDefaultAccount:(unsigned long long)a2;

@end

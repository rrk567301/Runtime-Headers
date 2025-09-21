@class MFEWSAccount;

@interface MFEWSPersistenceTaskHandler : MCTaskHandler

@property (readonly, weak) MFEWSAccount *account;

- (id)initWithAccount:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end

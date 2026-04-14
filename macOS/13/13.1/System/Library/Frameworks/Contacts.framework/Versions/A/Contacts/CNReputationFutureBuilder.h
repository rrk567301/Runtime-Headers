@class CNReputationLogger, CNReputationContactsAdapter, CNFuture, CNReputationHandle, CNReputationCoreRecentsAdapter;

@interface CNReputationFutureBuilder : NSObject

@property (readonly, copy, nonatomic) CNReputationHandle *handle;
@property (readonly, nonatomic) CNReputationCoreRecentsAdapter *coreRecentsAdapter;
@property (readonly, nonatomic) CNReputationContactsAdapter *contactsAdapter;
@property (readonly, nonatomic) CNReputationLogger *logger;
@property (retain, nonatomic) CNFuture *scoreFuture;

- (void).cxx_destruct;
- (id)build;
- (id)initWithHandle:(id)a0 coreRecentsAdapter:(id)a1 contactsAdapter:(id)a2 logger:(id)a3;
- (void)addCoreRecentsTrust;
- (id)coreRecentsTrustForHandle:(id)a0;
- (void)addContactsTrustForEmailAddress;
- (id)contactsTrustForEmailAddress:(id)a0;
- (void)addContactsTrustForPhoneNumber;
- (id)contactsTrustForPhoneNumber:(id)a0;

@end

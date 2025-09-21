@class NSObject, NSString, NSLock, EDCoreAnalyticAccountMapper;
@protocol OS_os_log, OS_dispatch_queue, EDAccountsProvider;

@interface EDCoreAnalyticAccountMapperService : NSObject <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain) EDCoreAnalyticAccountMapper *accountMapper;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) NSLock *lock;
@property (retain, nonatomic) id<EDAccountsProvider> accountsProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)validate;
- (void)saveToDisk;
- (id)_allActiveMailAccounts;
- (id)_convertMailAccountToAccountMapper;
- (void)_retrieveFromDisk;
- (unsigned long long)findAccountId:(id)a0;
- (id)getFileNameURL;
- (id)initWithAccountProvider:(id)a0;
- (unsigned long long)numberOfActiveAccounts;

@end

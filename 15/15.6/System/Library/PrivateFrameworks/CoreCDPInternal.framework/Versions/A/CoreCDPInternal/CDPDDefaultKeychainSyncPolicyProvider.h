@class CDPContext, NSString, CDPDAccount;

@interface CDPDDefaultKeychainSyncPolicyProvider : NSObject <CDPDKeychainSyncPolicyProvider, CDPInitUnavailable>

@property (readonly, nonatomic) CDPDAccount *account;
@property (readonly, nonatomic) CDPContext *context;
@property (readonly, nonatomic) char keychainSyncAllowedByMDM;
@property (readonly, nonatomic) char keychainSyncAllowedByServer;
@property (nonatomic) char userHasExplicitlyDisabledSync;
@property (readonly, nonatomic) char isBuddyFinished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end

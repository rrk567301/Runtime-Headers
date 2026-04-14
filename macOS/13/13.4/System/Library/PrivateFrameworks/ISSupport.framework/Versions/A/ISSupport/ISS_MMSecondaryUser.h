@class NSString;

@interface ISS_MMSecondaryUser : NSObject <ISS_MMCredential, ISS_MMPrincipal, ISS_MMTransactionGenerator> {
    id _identity;
    id _delegate;
    BOOL _use_synchronous;
    NSString *_principalID;
}

+ (id)principalIDWithName:(id)a0 andOwner:(id)a1;
+ (id)secondaryUserWithName:(id)a0 password:(id)a1 owner:(id)a2 applicationID:(id)a3;

- (void)dealloc;
- (id)name;
- (id)password;
- (id)owner;
- (id)applicationName;
- (BOOL)isSynchronous;
- (id)applicationID;
- (void)_setName:(id)a0;
- (void)_setPassword:(id)a0;
- (void)setApplicationName:(id)a0;
- (void)setIsSynchronous:(BOOL)a0;
- (void)setApplicationID:(id)a0;
- (id)_userAgent;
- (id)_accountInfo;
- (id)_applicationPrefix;
- (void)setManagedName:(id)a0;
- (id)_diskURL;
- (void)_setApplicationID:(id)a0;
- (void)_setApplicationPrefix:(id)a0;
- (void)_setDiskHost:(id)a0 port:(int)a1 scheme:(id)a2;
- (id)credentialsAreValid;
- (id)initWithName:(id)a0 password:(id)a1 owner:(id)a2 applicationID:(id)a3;
- (id)managedName;
- (id)principalID;
- (void)setTransactionDelegate:(id)a0;
- (id)transactionDelegate;

@end

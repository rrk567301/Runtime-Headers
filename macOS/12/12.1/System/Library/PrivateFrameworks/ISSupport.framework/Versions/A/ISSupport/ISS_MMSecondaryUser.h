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
- (BOOL)isSynchronous;
- (id)applicationName;
- (void)_setName:(id)a0;
- (void)_setPassword:(id)a0;
- (void)setApplicationName:(id)a0;
- (void)setIsSynchronous:(BOOL)a0;
- (void)setApplicationID:(id)a0;
- (id)applicationID;
- (id)principalID;
- (id)_userAgent;
- (id)_accountInfo;
- (id)initWithName:(id)a0 password:(id)a1 owner:(id)a2 applicationID:(id)a3;
- (void)_setApplicationID:(id)a0;
- (id)_applicationPrefix;
- (void)_setApplicationPrefix:(id)a0;
- (void)setManagedName:(id)a0;
- (id)managedName;
- (void)_setDiskHost:(id)a0 port:(int)a1 scheme:(id)a2;
- (id)_diskURL;
- (id)transactionDelegate;
- (void)setTransactionDelegate:(id)a0;
- (id)credentialsAreValid;

@end

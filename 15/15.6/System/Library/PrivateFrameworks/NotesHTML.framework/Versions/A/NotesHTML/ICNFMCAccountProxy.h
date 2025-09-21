@class NSString, NSOperationQueue, NSError, ICNFMCMailboxProxy;

@interface ICNFMCAccountProxy : ICNFMCManagedObjectProxy {
    _Atomic int _syncCount;
}

@property (readonly, copy) NSString *identifier;
@property long long accountState;
@property (readonly) char isSyncing;
@property char enabled;
@property (copy) NSString *displayName;
@property (copy) NSString *canonicalEmailAddress;
@property (copy) NSString *username;
@property char allowInsecureAuthentication;
@property (retain) NSError *webAuthenticationError;
@property (copy) NSString *certificateHostname;
@property (retain) NSError *certificateError;
@property (readonly, nonatomic) NSOperationQueue *remoteTaskQueue;
@property (readonly, nonatomic) NSOperationQueue *remoteFetchQueue;
@property (readonly, nonatomic) ICNFMCMailboxProxy *defaultHighPriorityMailbox;

+ (id)keyPathsForValuesAffectingIsSyncing;

- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithManagedObject:(id)a0;
- (void)syncStarted;
- (void)setHighPriorityMailbox:(id)a0;
- (void)syncFinished;

@end

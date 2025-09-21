@class NSString, _PASLock;

@interface ATXDigitalHealthBlacklist : NSObject <LSApplicationWorkspaceObserverProtocol> {
    _PASLock *_lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)_updateBlacklistWithNewBlacklistedBundleIds:(id)a0 whitelistedBundleIds:(id)a1;
- (void)dealloc;
- (id)blacklistedBundleIds;
- (id)init;
- (void).cxx_destruct;

@end

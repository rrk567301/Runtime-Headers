@class NSRecursiveLock;

@interface NSHTTPCookieStorageInternal : NSObject {
    struct OpaqueCFHTTPCookieStorage { } *storage;
    struct OpaqueCFHTTPCookieStorage { } *privateStorage;
    NSRecursiveLock *dataLock;
    char privateBrowsing;
}

- (void)dealloc;
- (void)_syncCookies;
- (void)registerForPostingNotificationsWithContext:(id)a0;

@end

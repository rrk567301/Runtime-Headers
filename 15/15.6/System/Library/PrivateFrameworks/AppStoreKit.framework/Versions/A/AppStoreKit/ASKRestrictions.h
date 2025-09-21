@class NSLock, ASKCommerceAccountChangeNotifier, ACAccountStore, NSObject;
@protocol OS_dispatch_queue;

@interface ASKRestrictions : NSObject {
    long long _maximumAppContentRating;
    char _isRunningInStoreDemoMode;
    char _hasManagedAppleID;
    char _isAccountModificationRestricted;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) ACAccountStore *accountStore;
@property (readonly, nonatomic) ASKCommerceAccountChangeNotifier *changeNotifier;
@property (retain, nonatomic) NSLock *stateLock;
@property (readonly, nonatomic) long long maximumAppContentRating;
@property (readonly, nonatomic) char isAppInstallationAllowed;
@property (readonly, nonatomic) char isAppUninstallationAllowed;
@property (readonly, nonatomic) char isRunningInStoreDemoMode;
@property (readonly, nonatomic) char hasManagedAppleID;
@property (readonly, nonatomic) char isAccountModificationRestricted;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithAccountStore:(id)a0;
- (char)updateRestrictionsIfNeeded;
- (void)updateRestrictionsIfNeededAndNotify;

@end

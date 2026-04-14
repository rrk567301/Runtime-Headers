@class NSDictionary;

@interface ASKRestrictions : NSObject {
    void /* unknown type, empty encoding */ accountStore;
    void /* unknown type, empty encoding */ changeNotifier;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ _maximumAppContentRating;
    void /* unknown type, empty encoding */ _isRunningInStoreDemoMode;
    void /* unknown type, empty encoding */ _hasManagedAppleID;
    void /* unknown type, empty encoding */ _isAccountModificationRestricted;
    void /* function */ contentRatingExceptionForBundleId;
}

@property (nonatomic, readonly) long long maximumAppContentRating;
@property (nonatomic, readonly) NSDictionary *contentRatingExceptionForBundleId;
@property (nonatomic, readonly) BOOL isAppInstallationAllowed;
@property (nonatomic, readonly) BOOL isAppUninstallationAllowed;
@property (nonatomic, readonly) BOOL isRunningInStoreDemoMode;
@property (nonatomic, readonly) BOOL hasManagedAppleID;
@property (nonatomic, readonly) BOOL isAccountModificationRestricted;

- (id)init;
- (id)initWithAccountStore:(id)a0;
- (void).cxx_destruct;
- (void)updateRestrictionsAndNotifyIfNeeded;

@end

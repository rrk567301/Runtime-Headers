@class NSDictionary;

@interface ASKRestrictions : SwiftNativeNSObject {
    void /* unknown type, empty encoding */ fetcher;
    void /* unknown type, empty encoding */ notificationTokens;
    void /* unknown type, empty encoding */ isUpdating;
    void /* unknown type, empty encoding */ maximumAppContentRatingBox;
    void /* unknown type, empty encoding */ contentRatingExceptionForBundleIdBox;
    void /* unknown type, empty encoding */ isAppInstallationAllowedBox;
    void /* unknown type, empty encoding */ isAppUninstallationAllowedBox;
    void /* unknown type, empty encoding */ isRunningInStoreDemoModeBox;
    void /* unknown type, empty encoding */ hasManagedAppleIDBox;
    void /* unknown type, empty encoding */ isAccountModificationRestrictedBox;
}

@property (nonatomic, readonly) long long maximumAppContentRating;
@property (nonatomic, readonly) NSDictionary *contentRatingExceptionForBundleId;
@property (nonatomic, readonly) BOOL isAppInstallationAllowed;
@property (nonatomic, readonly) BOOL isAppUninstallationAllowed;
@property (nonatomic, readonly) BOOL isRunningInStoreDemoMode;
@property (nonatomic, readonly) BOOL hasManagedAppleID;
@property (nonatomic, readonly) BOOL isAccountModificationRestricted;

- (id)init;

@end

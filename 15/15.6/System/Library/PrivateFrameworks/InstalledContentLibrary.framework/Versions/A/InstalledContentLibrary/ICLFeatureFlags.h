@interface ICLFeatureFlags : NSObject

@property (class, readonly, nonatomic) char isRestackingEnabled;
@property (class, readonly, nonatomic) char appReferencesEnabled;
@property (class, readonly, nonatomic) char systemAppDeletionEnabled;
@property (class, readonly, nonatomic) char transientBundleCleanupEnabled;
@property (class, readonly, nonatomic) char fullFidelityIconsEnabled;
@property (class, readonly, nonatomic) char twoStageAppInstallEnabled;

@end

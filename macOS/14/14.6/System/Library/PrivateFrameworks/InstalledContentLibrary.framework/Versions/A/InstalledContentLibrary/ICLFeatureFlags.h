@interface ICLFeatureFlags : NSObject

@property (class, readonly, nonatomic) BOOL isRestackingEnabled;
@property (class, readonly, nonatomic) BOOL appReferencesEnabled;
@property (class, readonly, nonatomic) BOOL systemAppDeletionEnabled;

@end

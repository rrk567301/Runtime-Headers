@interface WBFeatureManager : NSObject

@property (class, readonly, nonatomic) WBFeatureManager *sharedFeatureManager;

@property (readonly, nonatomic) long long accessLevel;
@property (readonly, nonatomic, getter=isOfflineReadingListAvailable) char offlineReadingListAvailable;
@property (readonly, nonatomic) char favoritesFolderSelectionShouldSync;

- (id)init;
- (void)_updateToAccessLevel:(long long)a0;

@end

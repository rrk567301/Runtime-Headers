@class NSMutableDictionary, NSDictionary, NSArray, NSMutableArray;

@interface UAShortcutManager : NSObject

@property (copy, nonatomic) id /* block */ _handler;
@property (retain, nonatomic) NSMutableArray *_orderedCategories;
@property (nonatomic) BOOL _registeredForNotifications;
@property (nonatomic) BOOL _needToReload;
@property (retain, nonatomic) NSMutableDictionary *_vendedCategoriesByIdentifier;
@property (copy) NSDictionary *_vendedFeaturesByIdentifier;
@property (retain, nonatomic) NSMutableArray *_mutableFeaturesAllowedToBeVisibleInTripleClick;
@property (readonly, copy, nonatomic) NSArray *categories;
@property (readonly, nonatomic) BOOL shouldShowSystemPrefLinks;

+ (id)shared;

- (void)_unregisterForNotifications;
- (void)_registerForNotifications;
- (void)dealloc;
- (id)init;
- (void)_reload;
- (void).cxx_destruct;
- (void)setChangedHandler:(id /* block */)a0;
- (void)_reloadIfNeeded;
- (void)_broadcastChanges:(id)a0;
- (id)_darwinNotificationsOfInterest;
- (id)_debugStringForCategories:(id)a0;
- (id)_getOrCreateCategoryID:(unsigned long long)a0;
- (id)_notificationsOfInterest;
- (void)_registerForBackgroundSounds;
- (void)_settingsChanged:(id)a0;
- (id)_vendedFeatureForFeatureName:(id)a0;
- (id)featureForID:(unsigned long long)a0;
- (id)featuresAllowedToBeVisibleInTripleClick;

@end

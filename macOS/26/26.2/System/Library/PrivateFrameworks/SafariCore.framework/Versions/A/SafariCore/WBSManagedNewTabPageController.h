@class NSString, MOEffectiveSettingsStore;
@protocol MOCancellable;

@interface WBSManagedNewTabPageController : NSObject {
    MOEffectiveSettingsStore *_managedSettingsStore;
    id<MOCancellable> _managedNewTabPageSubscription;
    BOOL _hasCachedNewTabPageState;
    long long _cachedNewTabPageState;
}

@property (readonly, nonatomic) long long managedNewTabPageState;
@property (readonly, copy, nonatomic) NSString *managedNewTabPageExtensionComposedIdentifier;
@property (readonly, copy, nonatomic) NSString *managedNewTabPageHomepageURLString;

+ (id)sharedController;

- (void).cxx_destruct;
- (id)init;
- (long long)_computeManagedNewTabPageType;

@end

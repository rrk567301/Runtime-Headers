@class CNCache;

@interface CNAvatarPickerExtensionDiscoveryManager : NSObject

@property (retain, nonatomic) id extensionMatchToken;
@property (retain, nonatomic) CNCache *cache;
@property (retain, nonatomic) CNCache *extensionViewCompletionHandlers;

+ (id)log;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)endExtensionDiscovery;
- (void)beginExtensionDiscovery;
- (void)loadViewControllerForExtensionIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)hostContextForItem:(id)a0;
- (void)cacheLoadExtensionViewCompletionHandler:(id /* block */)a0 forExtensionIdentifier:(id)a1;
- (void)loadViewControllerForExtension:(id)a0 inputItems:(id)a1 completion:(id /* block */)a2;
- (id)allExtensionIdentifiers;
- (void)beginDelayedExtensionDiscovery;
- (void)loadViewControllersForMemojiExtensions;
- (void)removeViewControllersForMemojiExtensions;
- (void)updatePosePickerIfNeededWithAvatarRecordIdentifier:(id)a0;

@end

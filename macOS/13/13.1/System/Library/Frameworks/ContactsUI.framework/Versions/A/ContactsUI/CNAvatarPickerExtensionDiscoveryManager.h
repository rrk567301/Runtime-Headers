@class CNCache;

@interface CNAvatarPickerExtensionDiscoveryManager : NSObject

@property (retain, nonatomic) id extensionMatchToken;
@property (retain, nonatomic) CNCache *cache;
@property (retain, nonatomic) CNCache *extensionViewCompletionHandlers;

+ (id)log;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)beginDelayedExtensionDiscovery;
- (void)beginExtensionDiscovery;
- (void)endExtensionDiscovery;
- (void)loadViewControllerForExtension:(id)a0 inputItems:(id)a1 completion:(id /* block */)a2;
- (void)loadViewControllerForExtensionIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)cacheLoadExtensionViewCompletionHandler:(id /* block */)a0 forExtensionIdentifier:(id)a1;
- (id)allExtensionIdentifiers;
- (void)loadViewControllersForMemojiExtensions;
- (void)removeViewControllersForMemojiExtensions;
- (id)hostContextForItem:(id)a0;
- (void)updatePosePickerIfNeededWithAvatarRecordIdentifier:(id)a0;

@end

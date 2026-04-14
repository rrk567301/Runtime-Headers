@class NSArray, SOExtensionFinder, NSObject;
@protocol OS_dispatch_queue;

@interface SOExtensionManager : NSObject {
    NSObject<OS_dispatch_queue> *_extensionManagerQueue;
    SOExtensionFinder *_extensionFinder;
}

@property (readonly, nonatomic) NSArray *loadedExtensions;

+ (id)sharedInstance;
+ (BOOL)isAppleConnectExtensionBundleIdentifier:(id)a0;
+ (id)internalExtensionsBundleIdentifiers;
+ (void)_sendNotificationsLoadedExtensions:(id)a0 new:(id)a1 removed:(id)a2;
+ (BOOL)isInternalExtensionBundleIdentifier:(id)a0;
+ (BOOL)isTiburonExtensionBundleIdentifier:(id)a0;
+ (id)internalExtensionBundleIdentifier;
+ (BOOL)_isMatchedExtension:(id)a0 forBundleIdentifier:(id)a1;

- (BOOL)isLoadedExtensionWithBundleIdentifier:(id)a0;
- (id)init;
- (id)_doLoadExtensions;
- (void)_doBeginMatchingExtensions;
- (void)unloadExtensions;
- (void)beginMatchingExtensions;
- (void)loadExtensions;
- (void).cxx_destruct;
- (void)loadExtensionWithBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)loadedExtensionWithBundleIdentifier:(id)a0;
- (void)dealloc;
- (void)_doEndMatchingExtensions;
- (id)loadInternalExtension;
- (id)loadedInternalExtension;
- (id)loadExtensionWithBundleIdentifier:(id)a0;
- (void)endMatchingExtensions;

@end

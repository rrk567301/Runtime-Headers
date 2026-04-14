@class NSArray, SOExtensionFinder, NSObject;
@protocol OS_dispatch_queue;

@interface SOExtensionManager : NSObject {
    NSObject<OS_dispatch_queue> *_extensionManagerQueue;
    SOExtensionFinder *_extensionFinder;
}

@property (readonly, nonatomic) NSArray *loadedExtensions;

+ (id)sharedInstance;
+ (BOOL)isInternalExtensionBundleIdentifier:(id)a0;
+ (BOOL)_isMatchedExtension:(id)a0 forBundleIdentifier:(id)a1;
+ (BOOL)isAppleConnectExtensionBundleIdentifier:(id)a0;
+ (id)internalExtensionsBundleIdentifiers;
+ (BOOL)isTiburonExtensionBundleIdentifier:(id)a0;
+ (void)_sendNotificationsLoadedExtensions:(id)a0 new:(id)a1 removed:(id)a2;
+ (id)internalExtensionBundleIdentifier;

- (void)_doEndMatchingExtensions;
- (void)dealloc;
- (BOOL)isLoadedExtensionWithBundleIdentifier:(id)a0;
- (void)_doBeginMatchingExtensions;
- (id)loadInternalExtension;
- (id)loadExtensionWithBundleIdentifier:(id)a0;
- (void)loadExtensions;
- (id)init;
- (id)loadedInternalExtension;
- (id)loadedExtensionWithBundleIdentifier:(id)a0;
- (void)endMatchingExtensions;
- (void)loadExtensionWithBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)unloadExtensions;
- (void)beginMatchingExtensions;
- (id)_doLoadExtensions;

@end

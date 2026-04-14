@class NSArray, SOExtensionFinder, NSObject;
@protocol OS_dispatch_queue;

@interface SOExtensionManager : NSObject {
    NSObject<OS_dispatch_queue> *_extensionManagerQueue;
    SOExtensionFinder *_extensionFinder;
}

@property (readonly, nonatomic) NSArray *loadedExtensions;

+ (id)sharedInstance;
+ (id)internalExtensionBundleIdentifier;
+ (BOOL)isAppleConnectExtensionBundleIdentifier:(id)a0;
+ (BOOL)isTiburonExtensionBundleIdentifier:(id)a0;
+ (id)internalExtensionsBundleIdentifiers;
+ (void)_sendNotificationsLoadedExtensions:(id)a0 new:(id)a1 removed:(id)a2;
+ (BOOL)isInternalExtensionBundleIdentifier:(id)a0;
+ (BOOL)_isMatchedExtension:(id)a0 forBundleIdentifier:(id)a1;

- (void)loadExtensions;
- (id)loadInternalExtension;
- (void)beginMatchingExtensions;
- (id)loadedInternalExtension;
- (void)unloadExtensions;
- (void).cxx_destruct;
- (id)_doLoadExtensions;
- (void)_doEndMatchingExtensions;
- (void)endMatchingExtensions;
- (void)_doBeginMatchingExtensions;
- (id)loadExtensionWithBundleIdentifier:(id)a0;
- (id)init;
- (id)loadedExtensionWithBundleIdentifier:(id)a0;
- (BOOL)isLoadedExtensionWithBundleIdentifier:(id)a0;
- (void)loadExtensionWithBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)dealloc;

@end

@class NSArray, SOExtensionFinder, NSObject;
@protocol OS_dispatch_queue;

@interface SOExtensionManager : NSObject {
    NSObject<OS_dispatch_queue> *_extensionManagerQueue;
    SOExtensionFinder *_extensionFinder;
}

@property (readonly, nonatomic) NSArray *loadedExtensions;

+ (id)sharedInstance;
+ (BOOL)isInternalExtensionBundleIdentifier:(id)a0;
+ (void)_sendNotificationsLoadedExtensions:(id)a0 new:(id)a1 removed:(id)a2;
+ (BOOL)isTiburonExtensionBundleIdentifier:(id)a0;
+ (id)internalExtensionBundleIdentifier;
+ (BOOL)_isMatchedExtension:(id)a0 forBundleIdentifier:(id)a1;
+ (id)internalExtensionsBundleIdentifiers;
+ (BOOL)isAppleConnectExtensionBundleIdentifier:(id)a0;

- (id)loadExtensionWithBundleIdentifier:(id)a0;
- (void)beginMatchingExtensions;
- (id)loadedInternalExtension;
- (void)_doBeginMatchingExtensions;
- (id)_doLoadExtensions;
- (void)loadExtensionWithBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)endMatchingExtensions;
- (void)unloadExtensions;
- (id)loadInternalExtension;
- (id)init;
- (id)loadedExtensionWithBundleIdentifier:(id)a0;
- (BOOL)isLoadedExtensionWithBundleIdentifier:(id)a0;
- (void)loadExtensions;
- (void)dealloc;
- (void)_doEndMatchingExtensions;

@end

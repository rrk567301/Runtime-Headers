@class NSDictionary, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface INCExtensionPlugInBundleManager : NSObject {
    NSMutableDictionary *_intentsSupported;
    NSObject<OS_dispatch_queue> *_intentsSupportedQueue;
    NSDictionary *_pluginsPlistDictionary;
}

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (id)_extensionPlugInBundleForIntent:(id)a0 bundleIdentifier:(id)a1;
- (char)_registerBundle:(id)a0 bundleIdentifier:(id)a1;
- (void)_setExtensionPlugInBundle:(id)a0 forIntent:(id)a1 bundleIdentifier:(id)a2;
- (id)extensionForIntent:(id)a0;
- (char)loadBundleForBundleIdentifier:(id)a0 wasPrewarmed:(char *)a1;

@end

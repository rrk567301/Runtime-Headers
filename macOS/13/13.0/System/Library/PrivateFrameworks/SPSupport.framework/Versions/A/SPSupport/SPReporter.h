@class NSBundle;

@interface SPReporter : NSObject {
    NSBundle *_bundle;
    struct __SecRequirement { } *_fromAppleRequirement;
    struct __SecRequirement { } *_fromMacAppStoreRequirement;
    struct __SecRequirement { } *_fromiOSAppStoreRequirement;
    struct __SecRequirement { } *_fromIdentifiedDeveloperRequirement;
}

+ (id)sharedReporter;
+ (BOOL)isRunningFromInstaller;
+ (id)reporterBundles;
+ (id)reporterBundlesForDataType:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)bundle;
- (id)propertiesDictionary;
- (id)localizedStringForKey:(id)a0;
- (id)updateDictionary:(id)a0;
- (id)codeSigningDictionaryForURL:(struct __CFURL { } *)a0;

@end

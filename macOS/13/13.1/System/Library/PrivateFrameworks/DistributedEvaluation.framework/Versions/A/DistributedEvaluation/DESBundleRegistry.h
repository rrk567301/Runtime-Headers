@class NSString, NSDictionary, NSSet;

@interface DESBundleRegistry : NSObject <DESBundleRegistryManaging> {
    NSDictionary *_bundleMap;
    NSSet *_lowMemoryExtensions;
    NSSet *_highMemoryExtensions;
    NSSet *_restrictedExtensions;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)sharedInstance;
+ (id)_extensionsWithEndpointName:(id)a0;

- (id)init;
- (id)_init;
- (void).cxx_destruct;
- (id)allBundleIds;
- (id)allUnrestrictedBundleIds;
- (id)allUnrestrictedExtensionIds;
- (BOOL)containsBundleId:(id)a0;
- (long long)pluginTypeForBundleId:(id)a0;
- (id)infoDictionaryForBundleID:(id)a0;

@end

@interface HKPluginLoader : NSObject

+ (Class)loadPrincipalClassConformingToProtocols:(id)a0 fromBundleAtURL:(id)a1 skipIfLoaded:(char)a2;
+ (id)loadPrincipalClassesConformingToProtocols:(id)a0 fromBundlesInDirectoryAtURL:(id)a1 skipLoadedBundles:(char)a2 error:(id *)a3;

@end

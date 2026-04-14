@interface HKPluginLoader : NSObject

+ (id)loadPrincipalClassesConformingToProtocols:(id)a0 fromBundlesInDirectoryAtURL:(id)a1 skipLoadedBundles:(BOOL)a2 error:(id *)a3;
+ (Class)loadPrincipalClassConformingToProtocols:(id)a0 fromBundleAtURL:(id)a1 skipIfLoaded:(BOOL)a2;

@end

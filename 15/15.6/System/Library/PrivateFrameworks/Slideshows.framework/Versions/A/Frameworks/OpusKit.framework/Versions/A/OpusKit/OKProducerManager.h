@class OFReachability, NSMutableDictionary, NSOperationQueue, NSObject;
@protocol OS_dispatch_queue;

@interface OKProducerManager : NSObject {
    NSMutableDictionary *_extentionClassNames;
    NSMutableDictionary *_installedPlugins;
    NSMutableDictionary *_installedContents;
    OFReachability *_reachability;
    long long _reachabilityStatus;
    NSObject<OS_dispatch_queue> *_serialCloudServicePreparationQueue;
    char _cloudServicePreparing;
    char _cloudServicePrepared;
    NSOperationQueue *_cloudServiceOperationQueue;
}

@property (nonatomic) char cloudServiceAutomaticUpdates;
@property (nonatomic) long long minimumNetworkStatusForDownloads;

+ (id)defaultManager;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)hasPluginWithIdentifier:(id)a0;
- (id)loadedContents;
- (void)_reachabilityChanged:(id)a0;
- (id)loadedPlugins;
- (id)allPluginsIdentifiers;
- (id)audioURLsForPluginIdentifier:(id)a0;
- (void)authorDocument:(id)a0 withPluginIdentifier:(id)a1 guidelines:(id)a2 flattenMedia:(char)a3 flattenProducer:(char)a4 progressBlock:(id /* block */)a5 completionBlock:(id /* block */)a6;
- (void)createDocumentAtDirectoryURL:(id)a0 withPluginIdentifier:(id)a1 guidelines:(id)a2 mediaURLs:(id)a3 mediaItemLookupDelegate:(id)a4 flattenMedia:(char)a5 flattenProducer:(char)a6 prepareCaches:(char)a7 format:(unsigned long long)a8 keepOpen:(char)a9 documentClass:(Class)a10 progressBlock:(id /* block */)a11 completionBlock:(id /* block */)a12;
- (id)localizedNameForPluginIdentifier:(id)a0;
- (void)_closeDocument:(id)a0 completionBlock:(id /* block */)a1;
- (id)_pluginFromURL:(id)a0;
- (id)installedContentWithIdentifier:(id)a0;
- (id)_allBundlesURLsWithExtention:(id)a0;
- (void)_closeAndDeleteDocument:(id)a0 fileURL:(id)a1 completionBlock:(id /* block */)a2;
- (id)_contentFromURL:(id)a0;
- (id)_contentWithIdentifier:(id)a0 progressBlock:(id /* block */)a1 completionBlock:(id /* block */)a2;
- (id)_installedURLsInDirectoryURL:(id)a0 withExtension:(id)a1;
- (void)_openDocument:(id)a0 completionBlock:(id /* block */)a1;
- (void)_saveDocument:(id)a0 completionBlock:(id /* block */)a1;
- (void)_saveDocument:(id)a0 toFileURL:(id)a1 completionBlock:(id /* block */)a2;
- (id)addContentFromURL:(id)a0;
- (id)addPluginFromURL:(id)a0;
- (id)allContentsIdentifiers;
- (id)allInstalledContents;
- (id)allInstalledPlugins;
- (void)contentWithIdentifier:(id)a0 progressBlock:(id /* block */)a1 completionBlock:(id /* block */)a2;
- (void)createDocumentAtFileURL:(id)a0 withPluginIdentifier:(id)a1 guidelines:(id)a2 mediaURLs:(id)a3 mediaItemLookupDelegate:(id)a4 flattenMedia:(char)a5 flattenProducer:(char)a6 prepareCaches:(char)a7 format:(unsigned long long)a8 keepOpen:(char)a9 documentClass:(Class)a10 progressBlock:(id /* block */)a11 completionBlock:(id /* block */)a12;
- (char)hasContentWithIdentifier:(id)a0;
- (char)hasInstalledContentWithIdentifier:(id)a0;
- (char)hasInstalledPluginWithIdentifier:(id)a0;
- (id)installContentAtURL:(id)a0 overwrite:(char)a1 error:(id *)a2;
- (id)installPluginAtURL:(id)a0 overwrite:(char)a1 error:(id *)a2;
- (id)installedContentAtURL:(id)a0;
- (id)installedPluginAtURL:(id)a0;
- (id)installedPluginWithIdentifier:(id)a0;
- (id)installedPluginWithName:(id)a0;
- (id)installedPluginsNames;
- (id)installedPluginsWithFamily:(unsigned long long)a0;
- (id)libraryPlugInsDirectoryURL;
- (void)pluginWithIdentifier:(id)a0 progressBlock:(id /* block */)a1 completionBlock:(id /* block */)a2;
- (id)pluginWithLoadedClass:(Class)a0;
- (void)prepareCloudServiceIfNeeded;
- (struct CGImage { } *)previewImageForPluginIdentifier:(id)a0;
- (void)refreshInstalledContents;
- (void)refreshInstalledPlugins;
- (void)registerExtensionClassName:(id)a0 forPluginIdentifier:(id)a1;
- (void)registerOpusKitClasses;
- (Class)registeredClassFromString:(id)a0;
- (char)uninstallContentWithIdentifier:(id)a0 error:(id *)a1;
- (char)uninstallPluginWithIdentifier:(id)a0 error:(id *)a1;
- (void)unregisterExtensionClassName:(id)a0 forPluginIdentifier:(id)a1;
- (id)userLibraryPlugInsDirectoryURL;
- (double)versionForContentIdentifier:(id)a0;
- (double)versionForPluginIdentifier:(id)a0;
- (void)waitUntilCloudServicePrepared:(double)a0;

@end

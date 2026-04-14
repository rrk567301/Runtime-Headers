@class NSString, NSMutableDictionary;

@interface SHKPlugInObservingCache : NSObject <LSApplicationWorkspaceObserverProtocol> {
    NSMutableDictionary *_dictionary;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)pluginsDidInstall:(id)a0;
- (void)pluginsWillUninstall:(id)a0;
- (void)invalidateCache;
- (BOOL)needsRefresh;
- (void)setBundle:(id)a0 forURL:(id)a1;
- (id)bundleForURL:(id)a0;

@end

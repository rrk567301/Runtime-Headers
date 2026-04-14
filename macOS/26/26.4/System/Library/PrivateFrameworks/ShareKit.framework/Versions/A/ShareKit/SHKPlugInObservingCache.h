@class NSString, NSMutableDictionary;

@interface SHKPlugInObservingCache : NSObject <LSApplicationWorkspaceObserverProtocol> {
    NSMutableDictionary *_dictionary;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidateCache;
- (void)pluginsWillUninstall:(id)a0;
- (void).cxx_destruct;
- (void)pluginsDidInstall:(id)a0;
- (id)init;
- (void)dealloc;
- (BOOL)needsRefresh;
- (id)bundleForURL:(id)a0;
- (void)setBundle:(id)a0 forURL:(id)a1;

@end

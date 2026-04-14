@class VRXVisualResponseProvider, SiriUIPluginManager;

@interface SiriUISnippetManager : NSObject {
    SiriUIPluginManager *_pluginManager;
    VRXVisualResponseProvider *_visualResponseProvider;
}

+ (id)sharedInstance;
+ (id)debugBundlePath;
+ (void)_debugSetPluginDirectory:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)speakableProviderForObject:(id)a0;
- (BOOL)_compareObject:(id)a0 toObject:(id)a1 usingBlock:(id /* block */)a2;
- (id)_createDebugViewControllerForAceObject:(id)a0;
- (id)filteredDisambiguationListItems:(id)a0;
- (id)disambiguationItemForListItem:(id)a0 disambiguationKey:(id)a1;
- (BOOL)_listItem:(id)a0 isEqualToListItem:(id)a1;
- (BOOL)_listItem:(id)a0 isPreferredOverListItem:(id)a1;
- (id)transcriptItemForObject:(id)a0;
- (id)listItemToPickInAutodisambiguationForListItems:(id)a0;

@end

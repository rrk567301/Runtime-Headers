@class NSString, WBSBrowserTabCompletionProvider;

@interface UnifiedFieldCompletionListGeneratorObjCAdapter : NSObject <WBSBrowserTabCompletionProviderSource, WBSBrowserTabCompletionProviderDelegate>

@property (readonly, nonatomic) void *completionListGenerator;
@property (readonly, nonatomic) WBSBrowserTabCompletionProvider *tabCompletionProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (id)tabInfosForBrowserTabCompletionProvider:(id)a0;
- (void)didFindMatchesForCurrentQueryInBrowserTabCompletionProvider:(id)a0;
- (id)selectedTabInfoForBrowserTabCompletionProvider:(id)a0;
- (void)_tabsDidChange:(id)a0;
- (id)initWithCompletionListGenerator:(void *)a0;
- (void)startLocalTabSearch;
- (void)cancelLocalTabSearch;
- (void)_startTrackingTabChanges;
- (void)_stopTrackingTabChanges;

@end

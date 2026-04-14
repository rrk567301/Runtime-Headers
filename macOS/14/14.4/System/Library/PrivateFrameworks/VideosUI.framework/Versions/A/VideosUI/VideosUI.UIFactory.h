@interface VideosUI.UIFactory : NSObject <VUIDocumentCreator>

- (id)catchUpToLiveViewControllerWithIndex:(unsigned long long)a0 playable:(id)a1 segments:(id)a2 metadataViewModels:(id)a3;
- (id)clipsViewControllerWithIndex:(unsigned long long)a0 collectionData:(id)a1;
- (BOOL)isDocumentViewController:(id)a0 equalToViewController:(id)a1;
- (void)recordImpressionsForViewController:(id)a0;
- (id)rootSplitViewController;
- (void)scrollViewControllerToTop:(id)a0 animated:(BOOL)a1 needsFocusUpdate:(BOOL)a2;
- (id)viewControllerWithDocumentDataSource:(id)a0 appContext:(id)a1 documentOptions:(id)a2;
- (id)init;
- (void).cxx_destruct;

@end

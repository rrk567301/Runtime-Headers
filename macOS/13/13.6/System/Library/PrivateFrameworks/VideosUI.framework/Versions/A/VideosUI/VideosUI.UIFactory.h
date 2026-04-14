@interface VideosUI.UIFactory : NSObject <VUIDocumentCreator>

- (BOOL)isDocumentViewController:(id)a0 equalToViewController:(id)a1;
- (void)recordImpressionsForViewController:(id)a0;
- (id)rootSplitViewController;
- (void)scrollViewControllerToTop:(id)a0;
- (id)viewControllerWithDocumentDataSource:(id)a0 appContext:(id)a1 documentOptions:(id)a2;
- (id)init;
- (void).cxx_destruct;

@end

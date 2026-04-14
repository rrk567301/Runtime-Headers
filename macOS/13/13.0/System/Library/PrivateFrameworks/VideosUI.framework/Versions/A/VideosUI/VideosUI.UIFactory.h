@interface VideosUI.UIFactory : NSObject <VUIDocumentCreator>

- (id)viewControllerWithDocumentDataSource:(id)a0 appContext:(id)a1 documentOptions:(id)a2;
- (void)recordImpressionsForViewController:(id)a0;
- (BOOL)isDocumentViewController:(id)a0 equalToViewController:(id)a1;
- (void)scrollViewControllerToTop:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end

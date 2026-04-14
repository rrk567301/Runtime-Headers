@class NSArray, WKWebView, NSMutableArray;

@interface WBSScribbleValidator : NSObject {
    WKWebView *_webView;
    NSArray *_elementsToValidate;
    NSArray *_targetsToExclude;
    NSMutableArray *_targetingResults;
    NSMutableArray *_targetsToHide;
    NSMutableArray *_targetsToReveal;
}

@property (readonly, nonatomic) NSArray *targetsToHide;
@property (readonly, nonatomic) NSArray *targetsToReveal;

- (void).cxx_destruct;
- (void)_addSimilarTargets:(id)a0 element:(id)a1;
- (void)_collectSimilarTargetsWithCompletion:(id /* block */)a0;
- (void)_compareRenderedTextWithCompletion:(id /* block */)a0;
- (void)_findTargetsUsingHitTest:(id)a0 completion:(id /* block */)a1;
- (void)_findTargetsUsingSelectors:(id)a0 completion:(id /* block */)a1;
- (void)_findTargetsUsingTextSearch:(id)a0 completion:(id /* block */)a1;
- (void)_removeHiddenResultsWithSimilarURLs;
- (void)_removeResultsWithDifferentGeometryAndRevealTargetsIfNeeded;
- (void)_removehiddenResultsAndAddInFlowElements;
- (void)_validateElementsWithCompletionHandler:(id /* block */)a0;
- (id)initWithWebView:(id)a0 elements:(id)a1 excludedTargets:(id)a2 completion:(id /* block */)a3;

@end

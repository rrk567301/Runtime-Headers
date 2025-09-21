@class _WKTargetedElementInfo, NSMutableSet;

@interface WBSElementTargetingResult : NSObject {
    NSMutableSet *_globalElements;
    NSMutableSet *_perSiteElements;
}

@property (readonly, nonatomic) _WKTargetedElementInfo *target;
@property (readonly, nonatomic, getter=isBackedByGlobalAction) char backedByGlobalAction;

- (void).cxx_destruct;
- (void)addElement:(id)a0;
- (void)_forEachPotentiallySimilarElement:(id /* block */)a0;
- (void)checkForSimilarRenderedText:(id /* block */)a0;
- (long long)computeURLSimilarity:(id *)a0;
- (char)hasSimilarGeometryInView:(id)a0;
- (id)initWithTarget:(id)a0 element:(id)a1;

@end

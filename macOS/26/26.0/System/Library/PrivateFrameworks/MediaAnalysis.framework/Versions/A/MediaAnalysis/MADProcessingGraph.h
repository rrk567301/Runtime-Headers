@class NSMutableArray, NSObject;
@protocol OS_dispatch_group;

@interface MADProcessingGraph : NSObject {
    NSMutableArray *_roots;
    NSObject<OS_dispatch_group> *_graphGroup;
    BOOL _startedProcessing;
    BOOL _isCanceled;
}

@property (retain) NSObject<OS_dispatch_group> *dispatchGroup;

- (id)init;
- (void).cxx_destruct;
- (void)cancelProcessing;
- (int)_setDispatchGroupOfNodesToMatch;
- (BOOL)addInput:(id)a0 error:(id *)a1;
- (id)_bfsFromNode:(id)a0 conditionBlock:(id /* block */)a1 actionBlock:(id /* block */)a2;
- (BOOL)_graphContainsNode:(id)a0;
- (BOOL)_searchForNode:(id)a0 startingFromNode:(id)a1;
- (BOOL)addChild:(id)a0 toParent:(id)a1 error:(id *)a2;
- (BOOL)addRoot:(id)a0 error:(id *)a1;
- (BOOL)connectChild:(id)a0 withParent:(id)a1 error:(id *)a2;
- (BOOL)hasProcessingFailure;
- (id)waitForResultsWithError:(id *)a0;

@end

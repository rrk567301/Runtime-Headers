@class NSString, IFInstallPlan, NSMutableSet, IFSearchContext;

@interface IFPathActionController : NSObject {
    IFInstallPlan *_plan;
    NSString *_destinationPath;
    IFSearchContext *_searchContext;
    NSMutableSet *_resolvedNodes;
}

- (id)plan;
- (void)dealloc;
- (id)initWithInstallPlan:(id)a0 onTarget:(id)a1 withSearchContext:(id)a2;
- (id)installTarget;
- (BOOL)resolveActionsForNode:(id)a0 resolvingParents:(BOOL)a1 returningError:(id *)a2;

@end

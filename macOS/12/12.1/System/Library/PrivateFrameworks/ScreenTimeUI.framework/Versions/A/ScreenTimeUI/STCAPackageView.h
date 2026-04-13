@class NSString, CAStateController, CALayer, NSMutableArray;

@interface STCAPackageView : NSView <CAStateControllerDelegate>

@property (retain) CAStateController *stateController;
@property BOOL geometryFlipped;
@property (readonly) NSMutableArray *completionHandlers;
@property (readonly, getter=isInitialState) BOOL initialState;
@property (readonly, copy) NSString *stateName;
@property (readonly) CALayer *packageRootLayer;

+ (id)keyPathsForValuesAffectingPackageRootLayer;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)wantsUpdateLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidChangeEffectiveAppearance;
- (id)makeBackingLayer;
- (void)stateController:(id)a0 transitionDidStop:(id)a1 completed:(BOOL)a2;
- (void)setInitialState;
- (void)animateToStateName:(id)a0 completionHandler:(id /* block */)a1;
- (void)setStateName:(id)a0;
- (void)_stcaPackageViewCommonInit;
- (id)_newStateControllerWithSuperlayer:(id)a0;
- (void)_changeAppearance;
- (id)_getStateWithName:(id)a0;
- (void)animateToInitialStateWithCompletionHandler:(id /* block */)a0;

@end

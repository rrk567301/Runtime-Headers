@class NSIndexSet;

@interface IKImageBrowserCoverFlowIntertiaAnimation : IKAnimationGroup {
    id _grid;
    double *_positions;
    int _positionsCount;
}

@property id grid;
@property double initialVelocity;
@property double initialPosition;
@property double scrollInitialTime;
@property (retain) NSIndexSet *groupIndexes;

- (void)dealloc;
- (void).cxx_destruct;
- (double)scrollVelocity;
- (void)setup;
- (char)animationManager:(id)a0 processStep:(id)a1;
- (char)handleChannel:(id)a0;

@end

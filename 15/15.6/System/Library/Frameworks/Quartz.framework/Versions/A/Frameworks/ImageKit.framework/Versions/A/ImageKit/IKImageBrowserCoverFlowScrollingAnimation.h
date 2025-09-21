@class NSIndexSet;

@interface IKImageBrowserCoverFlowScrollingAnimation : IKAnimationGroup {
    id _grid;
    double _scrollingInitialDistance;
    double _scrollingInitialTime;
}

@property id grid;
@property double initialOffset;
@property char snapMode;
@property char overflowMode;
@property double scrollVelocity;
@property (retain) NSIndexSet *groupIndexes;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (char)animationManager:(id)a0 processStep:(id)a1;
- (char)handleChannel:(id)a0;

@end

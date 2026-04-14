@class NSArray, NSMutableArray;

@interface NCVerticalListController : NSViewController {
    NSMutableArray *_containers;
    NSArray *_verticalLayoutConstraints;
    long long _updateCounter;
    NSMutableArray *_outstandingAdds;
    NSMutableArray *_outstandingDeletes;
    BOOL _swappingViews;
}

@property (readonly, nonatomic) NSArray *views;
@property (nonatomic) struct CGSize { double width; double height; } rowMargin;
@property (nonatomic) double topMargin;

- (void).cxx_destruct;
- (void)beginUpdates;
- (void)endUpdates;
- (void)loadView;
- (void)addView:(id)a0 animation:(unsigned long long)a1;
- (void)removeView:(id)a0 animation:(unsigned long long)a1;
- (void)_performUpdates;
- (void)insertView:(id)a0 atIndex:(unsigned long long)a1 animation:(unsigned long long)a2;
- (void)_installView:(id)a0 inContainer:(id)a1;
- (void)_fixupContainerConstraints;
- (id)_operationsToSynchArray:(id)a0 withArray:(id)a1;
- (void)_setupPendingDelete:(id)a0;
- (void)_performPendingAdd:(id)a0;
- (void)_performPendingDelete:(id)a0;
- (void)_performMixedUpdates;
- (void)_performAddUpdates;
- (void)_performDeleteUpdates;
- (void)moveView:(id)a0 toIndex:(unsigned long long)a1 animate:(BOOL)a2;
- (void)swapView:(id)a0 withView:(id)a1;
- (void)setViews:(id)a0 addAnimation:(unsigned long long)a1 removeAnimation:(unsigned long long)a2 forTransition:(BOOL)a3;
- (void)_view:(id)a0 removedFromContainer:(id)a1;

@end

@class NSTimer, NSArray;
@protocol SO_AXCyclingViewDelegate;

@interface SO_AXCyclingView : NSView

@property (nonatomic) BOOL isCycling;
@property (nonatomic) unsigned long long cycleIndex;
@property (retain, nonatomic) NSTimer *cycleTimer;
@property (nonatomic) BOOL shouldReduceMotion;
@property (readonly, nonatomic) double interval;
@property (readonly, nonatomic) NSArray *viewsInCycle;
@property (weak, nonatomic) id<SO_AXCyclingViewDelegate> delegate;

- (id)initWithInterval:(double)a0;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidMoveToWindow;
- (void)_makeNextViewVisible;
- (void)_updateForCycleIndexAnimated:(BOOL)a0;
- (void)beginCycling;
- (void)endCycling;

@end

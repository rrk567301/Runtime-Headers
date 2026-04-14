@class NSMutableDictionary;

@interface NSIATrackedActionsManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *trackedActionsCountDictionary;

- (void).cxx_destruct;
- (id)init;
- (void)addCounterWithName:(id)a0;
- (id)decrementCounterForName:(id)a0;
- (id)incrementCounterForName:(id)a0;
- (BOOL)isActionExpectedForName:(id)a0;

@end

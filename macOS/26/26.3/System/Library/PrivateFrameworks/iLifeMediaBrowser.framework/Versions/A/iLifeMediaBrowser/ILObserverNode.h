@class NSMutableArray;

@interface ILObserverNode : NSObject {
    NSMutableArray *observers;
}

- (void)addObserver:(id)a0;
- (id)initWithObserver:(id)a0;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (id)observers;
- (long long)observedCount;
- (void)removeOneObserver:(id)a0;

@end

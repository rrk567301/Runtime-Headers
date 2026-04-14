@class NSMutableArray;

@interface ILObserverNode : NSObject {
    NSMutableArray *observers;
}

- (void)dealloc;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (id)observers;
- (id)initWithObserver:(id)a0;
- (void)removeOneObserver:(id)a0;
- (long long)observedCount;

@end

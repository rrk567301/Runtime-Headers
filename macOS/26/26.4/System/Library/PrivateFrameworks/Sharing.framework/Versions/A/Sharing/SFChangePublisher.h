@class NSPointerArray;

@interface SFChangePublisher : NSObject

@property (readonly, nonatomic) NSPointerArray *observers;

- (void).cxx_destruct;
- (void)registerChangeObserver:(id)a0;
- (id)init;
- (void)unregisterChangeObserver:(id)a0;
- (void)publishChangeDescriptor:(unsigned long long)a0 forObservable:(id)a1;

@end

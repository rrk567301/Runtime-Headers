@class NSPointerArray;

@interface SFChangePublisher : NSObject

@property (readonly, nonatomic) NSPointerArray *observers;

- (id)init;
- (void).cxx_destruct;
- (void)registerChangeObserver:(id)a0;
- (void)unregisterChangeObserver:(id)a0;
- (void)publishChangeDescriptor:(unsigned long long)a0 forObservable:(id)a1;

@end

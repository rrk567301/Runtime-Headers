@class NSPointerArray;

@interface SFChangePublisher : NSObject

@property (readonly, nonatomic) NSPointerArray *observers;

- (void)unregisterChangeObserver:(id)a0;
- (void).cxx_destruct;
- (void)registerChangeObserver:(id)a0;
- (id)init;
- (void)publishChangeDescriptor:(unsigned long long)a0 forObservable:(id)a1;

@end

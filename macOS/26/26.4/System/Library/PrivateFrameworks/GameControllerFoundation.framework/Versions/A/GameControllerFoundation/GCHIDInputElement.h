@class _scaleType, HIDElement;

@interface GCHIDInputElement : NSObject {
    struct ObserverList { struct Observer *tqh_first; struct Observer **tqh_last; } _observers;
    struct Observer { _scaleType *_handler; long long x0; struct { struct Observer *tqe_next; struct Observer **tqe_prev; } pointers; } _firstObserver;
}

@property (readonly) HIDElement *element;
@property (readonly, nonatomic) struct __IOHIDValue { } *value;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void)dealloc;
- (id)initWithElement:(id)a0;
- (void)addScaled:(long long)a0 valueChangedHandler:(id /* block */)a1;
- (void)addValueChangedHandler:(id /* block */)a0;
- (id)registerScaled:(long long)a0 valueChangedHandler:(id /* block */)a1;
- (id)registerValueChangedHandler:(id /* block */)a0;
- (double)scaledValue:(long long)a0;

@end

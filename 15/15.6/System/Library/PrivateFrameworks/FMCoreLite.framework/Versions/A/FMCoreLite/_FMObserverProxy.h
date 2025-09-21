@interface _FMObserverProxy : NSObject

@property (readonly, weak, nonatomic) id weakObserver;
@property (readonly, nonatomic, getter=isValid) char valid;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithWeakObserver:(id)a0;

@end

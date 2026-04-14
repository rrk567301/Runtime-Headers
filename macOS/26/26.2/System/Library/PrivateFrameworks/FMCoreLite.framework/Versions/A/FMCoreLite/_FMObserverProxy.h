@interface _FMObserverProxy : NSObject

@property (readonly, weak, nonatomic) id weakObserver;
@property (readonly, nonatomic, getter=isValid) BOOL valid;

- (void)invalidate;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithWeakObserver:(id)a0;

@end

@interface AXFDispatchWorkItem : NSObject

@property (readonly, nonatomic) id /* block */ _block;
@property (readonly, nonatomic) unsigned long long _attributes;
@property (readonly) BOOL isCancelled;

- (void)cancel;
- (void)wait;
- (BOOL)waitWithTimeout:(long long)a0;
- (void).cxx_destruct;
- (id)initWithAttributes:(unsigned long long)a0 block:(id /* block */)a1;
- (void)notifyWithQueue:(id)a0 block:(id /* block */)a1;
- (void)notifyWithQueue:(id)a0 workItem:(id)a1;

@end

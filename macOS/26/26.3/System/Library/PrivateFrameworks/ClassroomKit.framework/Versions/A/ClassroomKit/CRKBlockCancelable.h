@interface CRKBlockCancelable : NSObject <CRKCancelable>

@property (copy, nonatomic) id /* block */ block;

+ (id)cancelableWithBlock:(id /* block */)a0;

- (void)cancel;
- (id)initWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end

@interface _UIFocusWeakHelper : NSObject

@property (copy, nonatomic) id /* block */ deallocationBlock;

- (void)dealloc;
- (void)invalidate;
- (id)initWithDeallocationBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end

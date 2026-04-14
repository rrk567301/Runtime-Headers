@interface _UIFocusWeakHelper : NSObject

@property (copy, nonatomic) id /* block */ deallocationBlock;

- (void)invalidate;
- (void)dealloc;
- (id)initWithDeallocationBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end

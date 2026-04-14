@interface _UIFocusWeakHelper : NSObject

@property (copy, nonatomic) id /* block */ deallocationBlock;

- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithDeallocationBlock:(id /* block */)a0;
- (void)dealloc;

@end

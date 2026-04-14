@interface _UIFocusWeakHelper : NSObject

@property (copy, nonatomic) id /* block */ deallocationBlock;

- (void)invalidate;
- (id)initWithDeallocationBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end

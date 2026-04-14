@interface _UIFocusWeakHelper : NSObject

@property (copy, nonatomic) id /* block */ deallocationBlock;

- (id)initWithDeallocationBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;

@end

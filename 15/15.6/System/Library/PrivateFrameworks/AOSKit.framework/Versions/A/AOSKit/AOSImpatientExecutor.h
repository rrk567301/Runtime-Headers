@interface AOSImpatientExecutor : NSObject

@property (copy) id /* block */ targetBlock;
@property double timeout;
@property (copy) id /* block */ timeoutBlock;

+ (char)executeBlock:(id /* block */)a0 withTimeout:(double)a1 timeoutBlock:(id /* block */)a2;

- (void)dealloc;
- (char)fire;

@end

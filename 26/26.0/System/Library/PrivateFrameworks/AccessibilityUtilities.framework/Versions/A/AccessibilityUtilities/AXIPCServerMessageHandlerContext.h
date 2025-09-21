@interface AXIPCServerMessageHandlerContext : NSObject

@property (readonly, nonatomic) id /* block */ handler;
@property (readonly, weak, nonatomic) id target;
@property (readonly, nonatomic) SEL selector;
@property (readonly, nonatomic) BOOL async;

- (id)initWithTarget:(id)a0 selector:(SEL)a1 async:(BOOL)a2;
- (id)initWithHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end

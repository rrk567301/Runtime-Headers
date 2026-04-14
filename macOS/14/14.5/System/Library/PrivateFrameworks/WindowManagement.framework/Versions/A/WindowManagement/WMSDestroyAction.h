@interface WMSDestroyAction : BSAction

- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithInfo:(id)a0 responder:(id)a1;
- (id)initWithInfo:(id)a0 timeout:(double)a1 forResponseOnQueue:(id)a2 withHandler:(id /* block */)a3;
- (id)initWithXPCDictionary:(id)a0;
- (id)initWithResponder:(id)a0;

@end

@interface ICDidMoveToWindowSpy : NSView

@property (readonly, weak, nonatomic) id owner;
@property (readonly, nonatomic) id /* block */ handler;

- (void)viewDidMoveToWindow;
- (void).cxx_destruct;
- (void)callHandler;
- (id)initWithOwner:(id)a0 handler:(id /* block */)a1;
- (void)scheduleCallHandler;

@end

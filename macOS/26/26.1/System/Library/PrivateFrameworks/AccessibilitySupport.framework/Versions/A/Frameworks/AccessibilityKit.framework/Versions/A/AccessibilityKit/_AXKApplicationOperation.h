@class AXKApplicationController;

@interface _AXKApplicationOperation : NSOperation

@property (weak, nonatomic, setter=_setApplicationController:) AXKApplicationController *_applicationController;
@property (copy, nonatomic, setter=_setWork:) id /* block */ _work;
@property (retain, nonatomic, setter=_setResult:) id _result;

- (void)main;
- (id)description;
- (void).cxx_destruct;
- (id)initWithWorkBlock:(id /* block */)a0 completionBlock:(id /* block */)a1 applicationController:(id)a2;

@end

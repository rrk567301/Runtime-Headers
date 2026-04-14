@interface MKBlurBackedControlProxy : NSProxy

@property (retain, nonatomic) id control;
@property (retain, nonatomic) id maskControl;

- (BOOL)respondsToSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)initWithControl:(id)a0 maskControl:(id)a1;

@end

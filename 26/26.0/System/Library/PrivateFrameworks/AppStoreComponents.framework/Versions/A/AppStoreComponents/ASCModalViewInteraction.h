@class ASCUIView;

@interface ASCModalViewInteraction : NSObject

@property (retain, nonatomic) id eventMonitor;
@property (retain, nonatomic) id didResignObserver;
@property (readonly, weak, nonatomic) ASCUIView *view;

- (void)dealloc;
- (id)initWithView:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)installWithCancelBlock:(id /* block */)a0;

@end

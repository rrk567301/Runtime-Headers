@class ASCUIView;

@interface ASCModalViewInteraction : NSObject

@property (retain, nonatomic) id eventMonitor;
@property (retain, nonatomic) id didResignObserver;
@property (readonly, weak, nonatomic) ASCUIView *view;

- (id)initWithView:(id)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;
- (void)installWithCancelBlock:(id /* block */)a0;

@end

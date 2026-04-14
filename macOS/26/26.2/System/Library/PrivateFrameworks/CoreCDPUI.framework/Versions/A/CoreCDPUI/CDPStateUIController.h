@class NSView, NSWindow;
@protocol CDPWindowDelegateProtocol;

@interface CDPStateUIController : CDPStateBaseUIController

@property (retain, nonatomic) NSWindow *iCDPWindow;
@property (retain, nonatomic) NSView *iCDPWindowView;
@property (retain, nonatomic) id<CDPWindowDelegateProtocol> delegate;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)endCDPView;
- (void)changeView:(id)a0;
- (void)setupCDPView:(id)a0;
- (void)showCDPView:(id)a0;
- (void)showCDPView:(id)a0 modalForWindow:(id)a1;

@end

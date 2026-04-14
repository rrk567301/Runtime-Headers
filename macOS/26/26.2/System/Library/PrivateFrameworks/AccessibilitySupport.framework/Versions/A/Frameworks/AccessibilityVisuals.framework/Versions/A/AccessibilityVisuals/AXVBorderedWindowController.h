@class AXVBorderedWindow, AXKElementController;

@interface AXVBorderedWindowController : NSObject

@property (retain, nonatomic) AXKElementController *_elementController;
@property (retain, nonatomic) AXKElementController *_windowElementController;
@property (readonly, nonatomic) AXVBorderedWindow *borderedWindow;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)hide;
- (void)show;
- (id)initWithUIElement:(id)a0;
- (void)_handleElementDestroyed:(id)a0;
- (void)_handleElementMoved:(id)a0;
- (void)_handleElementResized:(id)a0;

@end

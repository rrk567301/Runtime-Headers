@class AXVBorderedWindow, AXKElementController;

@interface AXVBorderedWindowController : NSObject

@property (retain, nonatomic) AXKElementController *_elementController;
@property (retain, nonatomic) AXKElementController *_windowElementController;
@property (readonly, nonatomic) AXVBorderedWindow *borderedWindow;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)hide;
- (void)show;
- (id)initWithUIElement:(id)a0;
- (void)_handleElementDestroyed:(id)a0;
- (void)_handleElementMoved:(id)a0;
- (void)_handleElementResized:(id)a0;

@end

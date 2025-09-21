@class AXFUIElement;

@interface SCRDataDetectorLocator : NSObject

@property (readonly, nonatomic) AXFUIElement *_uiElement;

- (BOOL)dataDetectorExistsAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)initWithUIElement:(id)a0;
- (id)_dataDetectorItemOutputWithType:(id)a0;
- (id)_dataDetectorTypeAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)openDataDetectorMenuAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)outputForDataDetectorItemsAtPoint:(struct CGPoint { double x0; double x1; })a0;

@end

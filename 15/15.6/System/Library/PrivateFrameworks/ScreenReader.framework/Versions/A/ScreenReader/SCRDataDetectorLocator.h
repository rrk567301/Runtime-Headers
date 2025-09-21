@class AXFUIElement;

@interface SCRDataDetectorLocator : NSObject

@property (readonly, nonatomic) AXFUIElement *_uiElement;

- (void).cxx_destruct;
- (char)dataDetectorExistsAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithUIElement:(id)a0;
- (id)_dataDetectorItemOutputWithType:(id)a0;
- (id)_dataDetectorTypeAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (char)openDataDetectorMenuAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)outputForDataDetectorItemsAtPoint:(struct CGPoint { double x0; double x1; })a0;

@end

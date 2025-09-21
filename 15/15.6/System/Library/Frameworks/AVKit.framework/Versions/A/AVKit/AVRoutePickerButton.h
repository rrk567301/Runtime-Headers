@interface AVRoutePickerButton : NSButton

@property (nonatomic) char togglesHighlight;
@property (nonatomic) char routeListCurrentlyPresented;

- (void)highlight:(char)a0;
- (void)mouseDown:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)mouseUp:(id)a0;

@end

@class DOMAbstractView;

@interface DOMUIEvent : DOMEvent

@property (readonly) DOMAbstractView *view;
@property (readonly) int detail;
@property (readonly) int keyCode;
@property (readonly) int charCode;
@property (readonly) int layerX;
@property (readonly) int layerY;
@property (readonly) int pageX;
@property (readonly) int pageY;
@property (readonly) int which;

- (void)initUIEvent:(id)a0 :(char)a1 :(char)a2 :(id)a3 :(int)a4;
- (void)initUIEvent:(id)a0 canBubble:(char)a1 cancelable:(char)a2 view:(id)a3 detail:(int)a4;

@end

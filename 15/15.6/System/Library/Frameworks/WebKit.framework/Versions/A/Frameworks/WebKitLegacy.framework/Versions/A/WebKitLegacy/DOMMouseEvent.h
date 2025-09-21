@class DOMNode;
@protocol DOMEventTarget;

@interface DOMMouseEvent : DOMUIEvent

@property (readonly) int screenX;
@property (readonly) int screenY;
@property (readonly) int clientX;
@property (readonly) int clientY;
@property (readonly) char ctrlKey;
@property (readonly) char shiftKey;
@property (readonly) char altKey;
@property (readonly) char metaKey;
@property (readonly) short button;
@property (readonly) id<DOMEventTarget> relatedTarget;
@property (readonly) int offsetX;
@property (readonly) int offsetY;
@property (readonly) int x;
@property (readonly) int y;
@property (readonly) DOMNode *fromElement;
@property (readonly) DOMNode *toElement;

- (void)initMouseEvent:(id)a0 :(char)a1 :(char)a2 :(id)a3 :(int)a4 :(int)a5 :(int)a6 :(int)a7 :(int)a8 :(char)a9 :(char)a10 :(char)a11 :(char)a12 :(unsigned short)a13 :(id)a14;
- (void)initMouseEvent:(id)a0 canBubble:(char)a1 cancelable:(char)a2 view:(id)a3 detail:(int)a4 screenX:(int)a5 screenY:(int)a6 clientX:(int)a7 clientY:(int)a8 ctrlKey:(char)a9 altKey:(char)a10 shiftKey:(char)a11 metaKey:(char)a12 button:(unsigned short)a13 relatedTarget:(id)a14;

@end

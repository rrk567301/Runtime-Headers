@class NSString;

@interface DOMTextEvent : DOMUIEvent

@property (readonly, copy) NSString *data;

- (void)initTextEvent:(id)a0 canBubbleArg:(char)a1 cancelableArg:(char)a2 viewArg:(id)a3 dataArg:(id)a4;

@end

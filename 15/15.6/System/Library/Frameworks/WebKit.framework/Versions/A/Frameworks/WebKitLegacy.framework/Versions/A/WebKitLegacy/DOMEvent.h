@class NSString;
@protocol DOMEventTarget;

@interface DOMEvent : DOMObject

@property (readonly, copy) NSString *type;
@property (readonly) id<DOMEventTarget> target;
@property (readonly) id<DOMEventTarget> currentTarget;
@property (readonly) unsigned short eventPhase;
@property (readonly) char bubbles;
@property (readonly) char cancelable;
@property (readonly) unsigned long long timeStamp;
@property (readonly) id<DOMEventTarget> srcElement;
@property char returnValue;
@property char cancelBubble;

- (void)dealloc;
- (char)isTrusted;
- (void)stopPropagation;
- (char)composed;
- (char)defaultPrevented;
- (void)initEvent:(id)a0 :(char)a1 :(char)a2;
- (void)initEvent:(id)a0 canBubbleArg:(char)a1 cancelableArg:(char)a2;
- (void)preventDefault;
- (void)stopImmediatePropagation;

@end

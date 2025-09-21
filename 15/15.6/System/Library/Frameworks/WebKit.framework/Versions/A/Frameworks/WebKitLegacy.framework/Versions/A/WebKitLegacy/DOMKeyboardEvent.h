@class NSString;

@interface DOMKeyboardEvent : DOMUIEvent

@property (readonly, copy) NSString *keyIdentifier;
@property (readonly) unsigned int location;
@property (readonly) unsigned int keyLocation;
@property (readonly) char ctrlKey;
@property (readonly) char shiftKey;
@property (readonly) char altKey;
@property (readonly) char metaKey;
@property (readonly) char altGraphKey;
@property (readonly) int keyCode;
@property (readonly) int charCode;

- (char)getModifierState:(id)a0;
- (void)initKeyboardEvent:(id)a0 canBubble:(char)a1 cancelable:(char)a2 view:(id)a3 keyIdentifier:(id)a4 keyLocation:(unsigned int)a5 ctrlKey:(char)a6 altKey:(char)a7 shiftKey:(char)a8 metaKey:(char)a9;
- (void)initKeyboardEvent:(id)a0 canBubble:(char)a1 cancelable:(char)a2 view:(id)a3 keyIdentifier:(id)a4 keyLocation:(unsigned int)a5 ctrlKey:(char)a6 altKey:(char)a7 shiftKey:(char)a8 metaKey:(char)a9 altGraphKey:(char)a10;
- (void)initKeyboardEvent:(id)a0 canBubble:(char)a1 cancelable:(char)a2 view:(id)a3 keyIdentifier:(id)a4 location:(unsigned int)a5 ctrlKey:(char)a6 altKey:(char)a7 shiftKey:(char)a8 metaKey:(char)a9;
- (void)initKeyboardEvent:(id)a0 canBubble:(char)a1 cancelable:(char)a2 view:(id)a3 keyIdentifier:(id)a4 location:(unsigned int)a5 ctrlKey:(char)a6 altKey:(char)a7 shiftKey:(char)a8 metaKey:(char)a9 altGraphKey:(char)a10;

@end

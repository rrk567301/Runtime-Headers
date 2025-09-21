@interface DOMOverflowEvent : DOMEvent

@property (readonly) unsigned short orient;
@property (readonly) char horizontalOverflow;
@property (readonly) char verticalOverflow;

- (void)initOverflowEvent:(unsigned short)a0 horizontalOverflow:(char)a1 verticalOverflow:(char)a2;

@end

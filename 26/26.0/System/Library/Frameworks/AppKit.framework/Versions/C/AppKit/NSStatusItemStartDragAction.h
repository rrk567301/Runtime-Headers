@interface NSStatusItemStartDragAction : BSAction

@property struct CGPoint { double x; double y; } offset;

- (id)initWithXPCDictionary:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;

@end

@interface NSStatusItemStartDragAction : BSAction

@property struct CGPoint { double x; double y; } offset;

- (void)encodeWithXPCDictionary:(id)a0;
- (id)initWithXPCDictionary:(id)a0;

@end

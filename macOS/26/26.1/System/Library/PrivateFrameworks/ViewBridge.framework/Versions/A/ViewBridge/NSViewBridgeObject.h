@interface NSViewBridgeObject : NSViewBridgeObjectBase

@property unsigned char owner;

- (void)setObject:(id)a0;
- (id)description;
- (id)initWithObject:(id)a0 owner:(unsigned char)a1;

@end

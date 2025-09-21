@interface NSStatusItemChangeVisibilityAction : BSAction

@property BOOL isVisible;
@property BOOL isTemporary;

- (id)initWithXPCDictionary:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;

@end

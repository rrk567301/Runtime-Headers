@interface NSStatusItemChangeVisibilityAction : BSAction

@property BOOL isVisible;
@property BOOL isTemporary;

- (void)encodeWithXPCDictionary:(id)a0;
- (id)initWithXPCDictionary:(id)a0;

@end

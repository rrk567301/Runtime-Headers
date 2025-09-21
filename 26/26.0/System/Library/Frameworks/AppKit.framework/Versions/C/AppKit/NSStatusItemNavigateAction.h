@interface NSStatusItemNavigateAction : BSAction

@property unsigned int command;
@property unsigned int options;

- (id)initWithXPCDictionary:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;

@end

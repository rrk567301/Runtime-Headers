@interface NSStatusItemNavigateAction : BSAction

@property unsigned int command;
@property unsigned int options;

- (void)encodeWithXPCDictionary:(id)a0;
- (id)initWithXPCDictionary:(id)a0;

@end

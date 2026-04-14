@interface _LSDOpenService : _LSDService

+ (id)XPCInterface;
+ (unsigned short)connectionType;
+ (Class)clientClass;

- (id)initWithXPCListener:(id)a0;

@end

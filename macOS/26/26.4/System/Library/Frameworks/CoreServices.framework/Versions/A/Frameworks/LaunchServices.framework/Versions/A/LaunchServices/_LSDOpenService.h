@interface _LSDOpenService : _LSDService

+ (unsigned short)connectionType;
+ (Class)clientClass;
+ (id)XPCInterface;

- (id)initWithXPCListener:(id)a0;

@end

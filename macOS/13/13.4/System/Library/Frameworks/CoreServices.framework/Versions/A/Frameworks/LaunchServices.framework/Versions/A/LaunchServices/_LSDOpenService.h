@interface _LSDOpenService : _LSDService

+ (id)XPCInterface;
+ (Class)clientClass;
+ (unsigned short)connectionType;
+ (id)dispatchQueue;

- (id)initWithXPCListener:(id)a0;

@end

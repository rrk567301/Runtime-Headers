@interface _LSDModifyService : _LSDService

+ (BOOL)isEnabled;
+ (unsigned short)connectionType;
+ (Class)clientClass;
+ (id)XPCInterface;
+ (id)dispatchQueue;

@end

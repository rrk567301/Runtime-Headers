@interface _LSDReadService : _LSDService

+ (id)XPCInterface;
+ (Class)clientClass;
+ (unsigned short)connectionType;
+ (id)dispatchQueue;
+ (BOOL)isEnabled;

@end

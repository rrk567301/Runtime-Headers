@interface OFLogger : NSObject

+ (void)finalize;
+ (id)alloc;
+ (void)initialize;
+ (void)logMessageWithLevel:(long long)a0 file:(const char *)a1 line:(unsigned int)a2 andFormat:(id)a3;

@end

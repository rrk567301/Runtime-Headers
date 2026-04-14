@interface ASDTBootArgs : NSObject

+ (id)get;
+ (BOOL)getBool:(id)a0;
+ (id)getString:(id)a0;
+ (unsigned long long)getUInt64:(id)a0;
+ (void)initBootArgs;
+ (void)initBootArgsFrom:(id)a0;

@end

@interface SRXPCListener : NSObject

+ (void)handleMessage:(id)a0 error:(id *)a1;
+ (void)handleCommand:(unsigned long long)a0 info:(id)a1 reply:(id)a2 error:(id *)a3;

@end

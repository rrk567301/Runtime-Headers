@interface BRPosixOperationsWrapper : NSObject

+ (int)closeFD:(int)a0;
+ (void)exitProcess:(int)a0;
+ (int)open:(id)a0 flags:(int)a1;

@end

@interface VMUTerminalColorizer : NSObject

+ (id)colorize:(id)a0 withColor:(unsigned int)a1 bold:(BOOL)a2;
+ (id)startColorCodeString:(unsigned int)a0;
+ (id)controlCodeResetString;

@end

@interface APRequirements : NSObject

@property (class) unsigned long long failForRequirements;

+ (char)_buildErrorWithCode:(long long)a0 message:(id)a1 returningError:(id *)a2;
+ (char)_testForFileSystemReturningError:(id *)a0;
+ (char)hasRequirements:(unsigned long long)a0 error:(id *)a1;

@end

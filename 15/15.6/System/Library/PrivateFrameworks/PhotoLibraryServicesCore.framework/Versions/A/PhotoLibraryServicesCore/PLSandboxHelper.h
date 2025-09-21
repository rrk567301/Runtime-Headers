@interface PLSandboxHelper : NSObject

+ (char)processCanReadSandboxForPath:(id)a0;
+ (char)processWithID:(int)a0 canReadSandboxForPath:(id)a1;
+ (char)processWithID:(int)a0 canWriteSandboxForPath:(id)a1;
+ (char)fileURLHasSecurityScope:(id)a0;
+ (char)processCanWriteSandboxForPath:(id)a0;

@end

@interface CRKConcreteSandboxPrimitives_macOS : NSObject <CRKSandboxPrimitives>

+ (id)processName;
+ (id)sandboxProfileName;
+ (BOOL)isSandboxDisabled;

- (BOOL)enter;
- (char *)getCacheDirectory;
- (char *)getHomeDirectory;
- (char *)getTempDirectory;

@end

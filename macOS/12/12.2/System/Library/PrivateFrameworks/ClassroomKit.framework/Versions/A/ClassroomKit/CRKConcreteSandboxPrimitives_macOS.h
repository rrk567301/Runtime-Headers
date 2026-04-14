@interface CRKConcreteSandboxPrimitives_macOS : NSObject <CRKSandboxPrimitives>

+ (id)processName;
+ (BOOL)isSandboxDisabled;
+ (id)sandboxProfileName;

- (BOOL)enter;
- (char *)getHomeDirectory;
- (char *)getTempDirectory;
- (char *)getCacheDirectory;

@end

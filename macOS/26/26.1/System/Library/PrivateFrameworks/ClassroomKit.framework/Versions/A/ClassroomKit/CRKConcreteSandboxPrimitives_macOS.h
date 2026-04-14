@interface CRKConcreteSandboxPrimitives_macOS : NSObject <CRKSandboxPrimitives>

+ (id)sandboxProfileName;
+ (id)processName;
+ (BOOL)isSandboxDisabled;

- (BOOL)enter;
- (char *)getCacheDirectory;
- (char *)getHomeDirectory;
- (char *)getTempDirectory;

@end

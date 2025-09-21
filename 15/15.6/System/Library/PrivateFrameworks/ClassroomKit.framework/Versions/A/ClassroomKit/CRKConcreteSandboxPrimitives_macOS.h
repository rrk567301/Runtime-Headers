@interface CRKConcreteSandboxPrimitives_macOS : NSObject <CRKSandboxPrimitives>

+ (id)processName;
+ (char)isSandboxDisabled;
+ (id)sandboxProfileName;

- (char)enter;
- (char *)getCacheDirectory;
- (char *)getHomeDirectory;
- (char *)getTempDirectory;

@end

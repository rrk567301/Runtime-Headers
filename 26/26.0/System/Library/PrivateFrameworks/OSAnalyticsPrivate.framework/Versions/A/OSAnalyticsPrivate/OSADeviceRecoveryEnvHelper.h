@class NSMutableArray;

@interface OSADeviceRecoveryEnvHelper : NSObject {
    NSMutableArray *_sandboxExtensions;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)releaseSandboxExtensions;
- (BOOL)overrideMountPath:(id)a0;

@end

@class NSString;

@interface SCRunningApplication : NSObject {
    NSString *_bundleIdentifier;
    NSString *_applicationName;
    int _processID;
}

@property (readonly) NSString *bundleIdentifier;
@property (readonly) NSString *applicationName;
@property (readonly) int processID;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithPID:(int)a0;
- (BOOL)isEqualToSCRunningApplication:(id)a0;

@end

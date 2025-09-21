@interface mis.LaunchWarningClientOperations : NSObject

- (id)init;
- (id)checkForLaunchWarning:(id)a0 error:(id *)a1;
- (id)queryAppBundle:(id)a0 error:(id *)a1;
- (id)queryExecutableURL:(id)a0 error:(id *)a1;
- (char)setUserOverride:(char)a0 forBundle:(id)a1 error:(id *)a2;

@end

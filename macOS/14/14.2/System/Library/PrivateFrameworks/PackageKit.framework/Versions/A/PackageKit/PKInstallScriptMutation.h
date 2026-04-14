@class NSString;

@interface PKInstallScriptMutation : NSObject {
    BOOL _dropSIP;
    NSString *_scriptPath;
    NSString *_mutationToPerform;
}

- (void)dealloc;

@end

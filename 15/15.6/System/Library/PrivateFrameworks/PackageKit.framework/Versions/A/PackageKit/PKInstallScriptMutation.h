@class NSString;

@interface PKInstallScriptMutation : NSObject {
    char _dropSIP;
    char _skip;
    NSString *_scriptPath;
    NSString *_mutationToPerform;
}

- (void)dealloc;

@end

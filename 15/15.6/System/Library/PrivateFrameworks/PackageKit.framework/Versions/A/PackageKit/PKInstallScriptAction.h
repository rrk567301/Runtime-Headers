@class NSString, NSArray;

@interface PKInstallScriptAction : NSObject {
    char _droppingSIP;
    char _skipScript;
    char _performRelativePathTransformation;
    NSString *_scriptRelativePath;
    NSArray *_componentPackageIdentifierExpressions;
    NSString *_mutationNameToPerform;
}

- (void)dealloc;

@end

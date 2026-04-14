@class NSString, NSSet, NSArray;

@interface PKInstallScriptAction : NSObject {
    BOOL _droppingSIP;
    BOOL _performRelativePathTransformation;
    NSString *_scriptRelativePath;
    NSSet *_scriptTypes;
    NSArray *_componentPackageIdentifierExpressions;
    NSString *_mutationNameToPerform;
}

- (void)dealloc;

@end

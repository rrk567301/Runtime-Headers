@class NSArray, NSDictionary;

@interface PKInstallScriptOverrides : NSObject {
    NSArray *_installScriptActions;
    NSDictionary *_scriptTypeToActionIndexes;
}

+ (id)_parseAndValidateInstallActionsArray:(id)a0 scriptTypesToScriptActionIndexes:(id *)a1;

- (void)dealloc;
- (id)init;

@end

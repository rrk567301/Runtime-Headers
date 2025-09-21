@class NSDictionary, SMRulesEngineDBClient, NSArray;

@interface SMRulesEngineRuleHandler : NSObject

@property (retain, nonatomic) NSDictionary *longTermSourceSystemIdentifier;
@property (retain, nonatomic) NSDictionary *longTermDestinationSystemIdentifier;
@property (retain) SMRulesEngineDBClient *rulesEngineDBClient;
@property (retain) NSArray *generatedLegacyServerRules;

- (void).cxx_destruct;
- (id)sourceVersion;
- (id)_source;
- (id)initWithSource:(id)a0 destination:(id)a1;
- (char)isApplicableInCurrentBootStage:(id)a0;
- (char)isDeferredCopy:(id)a0;
- (char)isPathFirmlink:(id)a0;
- (id)_destination;
- (unsigned long long)_migrationRequestType;
- (char)clearFirmlinkPathContents:(id)a0;
- (char)copyFirmlinkContents:(id)a0 newPath:(id)a1;
- (char)executeCopyRule:(id)a0;
- (void)executeRule:(id)a0;
- (void)executeToolAtPath:(id)a0 withArguments:(id)a1 andCopyPath:(id)a2 usingDeferral:(char)a3 allowSIP:(char)a4;
- (void)executeToolPathRule:(id)a0;
- (void)generateLegacyServerRulesFromPatherForUnreachablePaths:(id)a0;
- (id)generateTargetPath:(id)a0;
- (char)isApplicableRuleForCurrentMigrationType:(id)a0;
- (char)isPathingRuleApplicableForContext:(id)a0;
- (char)isRuleApplicable:(id)a0;
- (char)isRuleApplicableForContext:(id)a0;
- (char)isRuleApplicableForPather:(id)a0;
- (char)isSkipLegacyRuleInLegacy:(id)a0;
- (char)isSourceLessThanMaximumVersionAllowed:(id)a0;
- (char)isSourceMoreThanMinimumVersionAllowed:(id)a0;
- (char)isSourcePathAppleShippedDefault:(id)a0;
- (char)isSourcePathPresentInSource:(id)a0;
- (void)processRuleGroup:(long long)a0;
- (void)renameConflictingPathOnTarget:(id)a0 fullTargetPath:(id)a1 targetPath:(id)a2 deferredCopy:(char)a3;
- (id)stringBySubstitutingEnvironmentVariablesInString:(id)a0 environment:(id)a1;

@end

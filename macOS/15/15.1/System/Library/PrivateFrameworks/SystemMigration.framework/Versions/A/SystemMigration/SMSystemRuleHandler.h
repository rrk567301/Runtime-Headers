@class NSDictionary;

@interface SMSystemRuleHandler : NSObject

@property (retain, nonatomic) NSDictionary *longTermSourceSystemIdentifier;
@property (retain, nonatomic) NSDictionary *longTermDestinationSystemIdentifier;

- (void).cxx_destruct;
- (id)_source;
- (id)_destination;
- (id)sourceVersion;
- (id)initWithSource:(id)a0 destination:(id)a1;
- (BOOL)isApplicableInCurrentBootStage:(id)a0;
- (BOOL)isPathFirmlink:(id)a0;
- (unsigned long long)_migrationRequestType;
- (BOOL)clearFirmlinkPathContents:(id)a0;
- (void)copyFirmlinkContents:(id)a0 newPath:(id)a1;
- (id)generateDestinationPath:(id)a0;
- (BOOL)isApplicableRuleContext:(id)a0;
- (BOOL)isCopyRuleApplicable:(id)a0;
- (BOOL)isCopyableBecauseDestinationDoesNotExist:(id)a0;
- (BOOL)isRuleApplicable:(id)a0;
- (BOOL)isSkipLegacyRuleInLegacy:(id)a0;
- (BOOL)isSourceLessThanMaximumVersionAllowed:(id)a0;
- (BOOL)isSourceMoreThanMinimumVersionAllowed:(id)a0;
- (BOOL)isSourcePathAppleShippedDefault:(id)a0;
- (BOOL)isSourcePathPresentInSource:(id)a0;

@end

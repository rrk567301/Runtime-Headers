@class NSURL, NSString;

@interface SMSystemRule : NSObject

@property (readonly, nonatomic) long long ruleID;
@property (readonly, nonatomic) long long context;
@property (readonly, nonatomic) long long actionType;
@property (readonly, nonatomic) long long ruleGroup;
@property (readonly, nonatomic) NSURL *path;
@property (readonly, nonatomic) NSURL *alternatePath;
@property (readonly, nonatomic) NSString *comments;
@property (readonly, nonatomic) char deferredCopy;
@property (readonly, nonatomic) char disableMigratedVersion;
@property (readonly, nonatomic) NSString *maxSourceVersion;
@property (readonly, nonatomic) NSString *minSourceVersion;
@property (readonly, nonatomic) char overwriteExistingPath;
@property (readonly, nonatomic) char runsAfterRestart;
@property (readonly, nonatomic) char skipIfDestinationExists;
@property (readonly, nonatomic) char skipIfLegacyServer;
@property (readonly, nonatomic) NSString *skipIfOlderThan;
@property (readonly, nonatomic) char symlinkAllowed;
@property (readonly, nonatomic) NSURL *toolPath;
@property (readonly, nonatomic) long long sortOrder;
@property (readonly, nonatomic) char needsValidation;
@property (readonly, nonatomic) char allowSIP;
@property (readonly, nonatomic) char isAppleInternal;

+ (id)stringFromActionType:(long long)a0;
+ (id)stringFromContext:(long long)a0;
+ (id)stringFromRuleGroup:(long long)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithRow:(id)a0;
- (long long)actionTypeFromString:(id)a0;
- (long long)contextFromString:(id)a0;
- (id)initWithUnreachableLegacyPath:(id)a0;
- (long long)ruleGroupFromString:(id)a0;

@end

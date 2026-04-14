@class NSURL, NSString;

@interface SMSystemRule : NSObject

@property (readonly, nonatomic) long long ruleID;
@property (readonly, nonatomic) long long context;
@property (readonly, nonatomic) long long actionType;
@property (readonly, nonatomic) long long ruleGroup;
@property (readonly, nonatomic) NSURL *path;
@property (readonly, nonatomic) NSURL *alternatePath;
@property (readonly, nonatomic) NSString *comments;
@property (readonly, nonatomic) BOOL deferredCopy;
@property (readonly, nonatomic) NSString *maxSourceVersion;
@property (readonly, nonatomic) NSString *minSourceVersion;
@property (readonly, nonatomic) BOOL overwriteExistingPath;
@property (readonly, nonatomic) BOOL runsAfterRestart;
@property (readonly, nonatomic) BOOL skipIfDestinationExists;
@property (readonly, nonatomic) BOOL skipIfLegacyServer;
@property (readonly, nonatomic) NSURL *toolPath;
@property (readonly, nonatomic) BOOL allowSIP;
@property (readonly, nonatomic) BOOL isAppleInternal;

+ (id)stringFromActionType:(long long)a0;
+ (id)stringFromContext:(long long)a0;
+ (id)stringFromRuleGroup:(long long)a0;

- (id)initWithRow:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (long long)actionTypeFromString:(id)a0;
- (long long)contextFromString:(id)a0;
- (id)createNSURLFromPathString:(id)a0;
- (id)initWithUnreachableLegacyPath:(id)a0;
- (long long)ruleGroupFromString:(id)a0;

@end

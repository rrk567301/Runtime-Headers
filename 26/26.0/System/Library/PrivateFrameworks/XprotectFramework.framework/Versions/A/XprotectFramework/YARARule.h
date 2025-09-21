@class NSString, NSUUID;

@interface YARARule : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *ruleName;
@property (readonly, nonatomic) int matchType;
@property (readonly, nonatomic) BOOL firstLaunchOnly;
@property (readonly, nonatomic) BOOL forcedRule;
@property (readonly, nonatomic) int priority;
@property (readonly, nonatomic) NSString *remediator;
@property (readonly, nonatomic) NSString *plugin;
@property (readonly, nonatomic) NSUUID *samplingUUID;

+ (int)getMatchTypeFromBitmask:(unsigned long long)a0;
+ (int)getPriorityForYaraMatch:(unsigned long long)a0;
+ (BOOL)xp_yara_rule_is_forced:(struct YR_RULE { int x0; int x1; union { char *x0; struct YR_ARENA_REF { unsigned int x0; unsigned int x1; } x1; } x2; union { char *x0; struct YR_ARENA_REF { unsigned int x0; unsigned int x1; } x1; } x3; union { struct YR_META *x0; struct YR_ARENA_REF { unsigned int x0; unsigned int x1; } x1; } x4; union { struct YR_STRING *x0; struct YR_ARENA_REF { unsigned int x0; unsigned int x1; } x1; } x5; union { struct YR_NAMESPACE *x0; struct YR_ARENA_REF { unsigned int x0; unsigned int x1; } x1; } x6; } *)a0;

- (BOOL)stopScanning;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initFromYARA:(struct YR_RULE { int x0; int x1; union { char *x0; struct YR_ARENA_REF { unsigned int x0; unsigned int x1; } x1; } x2; union { char *x0; struct YR_ARENA_REF { unsigned int x0; unsigned int x1; } x1; } x3; union { struct YR_META *x0; struct YR_ARENA_REF { unsigned int x0; unsigned int x1; } x1; } x4; union { struct YR_STRING *x0; struct YR_ARENA_REF { unsigned int x0; unsigned int x1; } x1; } x5; union { struct YR_NAMESPACE *x0; struct YR_ARENA_REF { unsigned int x0; unsigned int x1; } x1; } x6; } *)a0;

@end

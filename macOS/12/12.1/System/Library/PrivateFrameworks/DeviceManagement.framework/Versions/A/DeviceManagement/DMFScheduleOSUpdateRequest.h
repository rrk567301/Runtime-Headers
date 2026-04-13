@class NSString;

@interface DMFScheduleOSUpdateRequest : DMFTaskRequest

@property (nonatomic) unsigned long long action;
@property (copy, nonatomic) NSString *productKey;
@property (copy, nonatomic) NSString *productVersion;
@property (nonatomic) BOOL useDelay;

+ (BOOL)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnSystemConnection;
+ (BOOL)isPermittedOnUserConnection;
+ (Class)whitelistedClassForResultObject;
+ (id)_descriptionForAction:(unsigned long long)a0;
+ (BOOL)_action:(unsigned long long *)a0 fromString:(id)a1;

- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end

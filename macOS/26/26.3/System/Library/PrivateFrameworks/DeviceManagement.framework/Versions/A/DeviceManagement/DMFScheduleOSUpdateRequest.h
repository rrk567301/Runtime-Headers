@class NSString;

@interface DMFScheduleOSUpdateRequest : DMFTaskRequest

@property (nonatomic) unsigned long long action;
@property (copy, nonatomic) NSString *productKey;
@property (copy, nonatomic) NSString *productVersion;
@property (nonatomic) BOOL useDelay;

+ (id)permittedPlatforms;
+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
+ (id)_descriptionForAction:(unsigned long long)a0;
+ (Class)allowlistedClassForResultObject;
+ (BOOL)_action:(unsigned long long *)a0 fromString:(id)a1;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

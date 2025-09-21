@class NSString;

@interface DMFScheduleOSUpdateRequest : DMFTaskRequest

@property (nonatomic) unsigned long long action;
@property (copy, nonatomic) NSString *productKey;
@property (copy, nonatomic) NSString *productVersion;
@property (nonatomic) char useDelay;

+ (char)supportsSecureCoding;
+ (id)_descriptionForAction:(unsigned long long)a0;
+ (Class)allowlistedClassForResultObject;
+ (char)_action:(unsigned long long *)a0 fromString:(id)a1;
+ (char)isPermittedOnSystemConnection;
+ (char)isPermittedOnUserConnection;
+ (id)permittedPlatforms;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

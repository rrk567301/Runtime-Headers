@class NSString, NSData;

@interface DMFOpenAppRequest : DMFTaskRequest

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *activityType;
@property (copy, nonatomic) NSData *activityData;
@property (nonatomic) char lockInApp;

+ (char)supportsSecureCoding;
+ (char)isPermittedOnSystemConnection;
+ (char)isPermittedOnUserConnection;
+ (id)permittedPlatforms;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

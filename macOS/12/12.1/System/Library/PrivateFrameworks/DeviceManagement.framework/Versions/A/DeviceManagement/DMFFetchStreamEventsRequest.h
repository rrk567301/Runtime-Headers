@class NSString, NSArray, NSDate;

@interface DMFFetchStreamEventsRequest : DMFTaskRequest

@property (copy, nonatomic) NSString *organizationIdentifier;
@property (copy, nonatomic) NSArray *eventIdentifiers;
@property (retain, nonatomic) NSDate *startDate;

+ (BOOL)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnSystemConnection;
+ (BOOL)isPermittedOnUserConnection;
+ (Class)whitelistedClassForResultObject;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end

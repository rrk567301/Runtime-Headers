@class NSString, NSArray, NSDate;

@interface DMFFetchStreamEventsRequest : DMFTaskRequest

@property (copy, nonatomic) NSString *organizationIdentifier;
@property (copy, nonatomic) NSArray *eventIdentifiers;
@property (retain, nonatomic) NSDate *startDate;

+ (id)permittedPlatforms;
+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
+ (Class)allowlistedClassForResultObject;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

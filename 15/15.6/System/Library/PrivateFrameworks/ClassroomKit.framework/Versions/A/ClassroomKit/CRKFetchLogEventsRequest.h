@class NSString, NSDate;

@interface CRKFetchLogEventsRequest : CATTaskRequest

@property (copy, nonatomic) NSDate *cursorDate;
@property (copy, nonatomic) NSString *sessionToken;

+ (char)supportsSecureCoding;
+ (Class)allowlistedClassForResultObject;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

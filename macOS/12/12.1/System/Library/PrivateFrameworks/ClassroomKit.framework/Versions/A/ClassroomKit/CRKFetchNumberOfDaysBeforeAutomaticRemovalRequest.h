@class DMFControlGroupIdentifier;

@interface CRKFetchNumberOfDaysBeforeAutomaticRemovalRequest : CATTaskRequest

@property (retain, nonatomic) DMFControlGroupIdentifier *groupIdentifier;

+ (BOOL)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end

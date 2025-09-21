@class DMFControlGroupIdentifier, NSArray;

@interface CRKLeaveControlGroupRequest : CATTaskRequest

@property (retain, nonatomic) DMFControlGroupIdentifier *groupIdentifier;
@property (copy, nonatomic) NSArray *leaderIdentifiers;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

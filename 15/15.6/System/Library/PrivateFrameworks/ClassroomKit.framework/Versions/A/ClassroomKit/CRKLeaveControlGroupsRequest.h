@class NSSet;

@interface CRKLeaveControlGroupsRequest : CATTaskRequest

@property (retain, nonatomic) NSSet *groupIdentifiers;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

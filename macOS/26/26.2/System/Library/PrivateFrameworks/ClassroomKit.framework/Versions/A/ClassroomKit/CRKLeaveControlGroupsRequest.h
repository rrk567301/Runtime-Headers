@class NSSet;

@interface CRKLeaveControlGroupsRequest : CATTaskRequest

@property (retain, nonatomic) NSSet *groupIdentifiers;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end

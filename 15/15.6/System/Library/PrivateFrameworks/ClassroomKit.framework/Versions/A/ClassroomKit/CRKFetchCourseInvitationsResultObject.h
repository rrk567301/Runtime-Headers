@class NSArray, NSSet;

@interface CRKFetchCourseInvitationsResultObject : CATTaskResultObject

@property (retain, nonatomic) NSArray *courseInvitations;
@property (copy, nonatomic) NSSet *acceptedInvitationIdentifiers;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

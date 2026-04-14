@class CRKCourseInvitation;

@interface CRKInviteToCourseRequest : CATTaskRequest

@property (retain, nonatomic) CRKCourseInvitation *invitation;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end

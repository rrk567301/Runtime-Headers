@class CRKCourseInvitation;

@interface CRKInviteToCourseRequest : CATTaskRequest

@property (retain, nonatomic) CRKCourseInvitation *invitation;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

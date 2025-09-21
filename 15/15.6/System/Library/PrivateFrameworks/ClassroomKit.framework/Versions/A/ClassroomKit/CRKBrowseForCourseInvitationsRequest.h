@interface CRKBrowseForCourseInvitationsRequest : CATTaskRequest

@property (nonatomic) char ignoresDeviceIdleState;

+ (char)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

@interface CRKBrowseForCourseInvitationsRequest : CATTaskRequest

@property (nonatomic) BOOL ignoresDeviceIdleState;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end

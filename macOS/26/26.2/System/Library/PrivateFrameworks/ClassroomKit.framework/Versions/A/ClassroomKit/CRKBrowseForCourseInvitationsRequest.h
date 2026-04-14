@interface CRKBrowseForCourseInvitationsRequest : CATTaskRequest

@property (nonatomic) BOOL ignoresDeviceIdleState;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;

@end

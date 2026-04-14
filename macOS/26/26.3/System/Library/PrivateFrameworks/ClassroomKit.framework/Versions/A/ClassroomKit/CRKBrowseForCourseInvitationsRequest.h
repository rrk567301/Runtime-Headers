@interface CRKBrowseForCourseInvitationsRequest : CATTaskRequest

@property (nonatomic) BOOL ignoresDeviceIdleState;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

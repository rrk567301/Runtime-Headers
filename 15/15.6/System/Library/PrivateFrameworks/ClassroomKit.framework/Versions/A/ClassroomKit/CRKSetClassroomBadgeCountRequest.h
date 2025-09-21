@interface CRKSetClassroomBadgeCountRequest : CATTaskRequest

@property (nonatomic) long long badgeCount;

+ (char)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

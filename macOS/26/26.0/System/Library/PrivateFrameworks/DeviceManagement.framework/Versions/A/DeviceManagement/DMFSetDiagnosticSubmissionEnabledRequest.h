@interface DMFSetDiagnosticSubmissionEnabledRequest : DMFTaskRequest

@property (nonatomic) BOOL enabled;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

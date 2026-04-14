@class NSURL, NSString;

@interface DMFInviteUserToVPPRequest : DMFTaskRequest

@property (copy, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *originator;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnSystemConnection;
+ (BOOL)isPermittedOnUserConnection;
+ (id)permittedPlatforms;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end

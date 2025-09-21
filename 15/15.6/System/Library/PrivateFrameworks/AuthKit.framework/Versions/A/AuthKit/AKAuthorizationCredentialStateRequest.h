@class NSString;

@interface AKAuthorizationCredentialStateRequest : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *teamID;
@property (copy, nonatomic) NSString *clientID;
@property (copy, nonatomic) NSString *altDSID;
@property (nonatomic) char shouldIgnoreUserID;
@property (nonatomic) char shouldIgnoreTeamID;
@property (copy, nonatomic) NSString *userID;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

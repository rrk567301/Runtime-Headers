@class NSString;

@interface POWSTrustUsernameTokenType : POWSTrustBaseRequestType

@property (copy, nonatomic) NSString *Id;
@property (copy, nonatomic) NSString *Username;
@property (copy, nonatomic) NSString *Password;

+ (id)definition;

- (void).cxx_destruct;
- (id)description;

@end

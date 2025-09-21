@class NSString;

@interface POUserRegistrationStatus : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic, getter=isPlatformSSOEnabled) char platformSSOEnabled;
@property (retain, nonatomic) NSString *loginUserName;
@property (nonatomic) long long authenticationMethod;
@property (nonatomic) long long userRegistrationStatus;
@property (nonatomic, getter=isActionButtonEnabled) char actionButtonEnabled;
@property (nonatomic) long long actionButtonAction;
@property (nonatomic) long long userTokenStatus;
@property (nonatomic, getter=isAuthenticateButtonEnabled) char authenticateButtonEnabled;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

@class NSString, NSNumber, NSDictionary;

@interface ISAuthenticationContext : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property char demoMode;
@property char demoAutologinMode;
@property (retain) NSString *demoAccountName;
@property (retain) NSString *demoAccountPassword;
@property (readonly) NSNumber *accountID;
@property (retain) NSDictionary *additionalQueryParameters;
@property long long authenticationStyle;
@property long long authenticationReason;
@property long long bagType;
@property (retain) NSDictionary *signUpQueryParameters;
@property char shouldFollowAccountButtons;
@property char useCachedCredentials;
@property (retain) NSString *appleIDOverride;
@property char enforceAppleIDOverride;
@property (retain) NSString *applicationName;
@property (retain) NSDictionary *dialogDictionary;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAccountID:(id)a0;

@end

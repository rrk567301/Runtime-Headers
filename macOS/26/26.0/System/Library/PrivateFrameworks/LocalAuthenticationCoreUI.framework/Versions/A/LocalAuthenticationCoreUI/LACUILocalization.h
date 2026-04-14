@class NSString;

@interface LACUILocalization : NSObject

@property (class, nonatomic, readonly) NSString *authenticationFailed;
@property (class, nonatomic, readonly) NSString *cancel;
@property (class, nonatomic, readonly) NSString *enterPasswordToAllowThis;
@property (class, nonatomic, readonly) NSString *enterPasswordToAllowThisAdmin;
@property (class, nonatomic, readonly) NSString *enterPinToAllowThis;
@property (class, nonatomic, readonly) NSString *enterPinToAllowThisAdmin;
@property (class, nonatomic, readonly) NSString *ok;
@property (class, nonatomic, readonly) NSString *password;
@property (class, nonatomic, readonly) NSString *pin;
@property (class, nonatomic, readonly) NSString *touchIdOrPasswordToAllowThis;
@property (class, nonatomic, readonly) NSString *touchIdOrPasswordToAllowThisAdmin;
@property (class, nonatomic, readonly) NSString *touchIdOrPinToAllowThis;
@property (class, nonatomic, readonly) NSString *touchIdOrPinToAllowThisAdmin;
@property (class, nonatomic, readonly) NSString *unlock;
@property (class, nonatomic, readonly) NSString *usePassword;
@property (class, nonatomic, readonly) NSString *usePin;
@property (class, nonatomic, readonly) NSString *username;
@property (class, nonatomic, readonly) NSString *watchOrPasswordToAllowThis;
@property (class, nonatomic, readonly) NSString *watchOrPasswordToAllowThisAdmin;
@property (class, nonatomic, readonly) NSString *watchOrPinToAllowThis;
@property (class, nonatomic, readonly) NSString *watchOrPinToAllowThisAdmin;

- (id)init;

@end

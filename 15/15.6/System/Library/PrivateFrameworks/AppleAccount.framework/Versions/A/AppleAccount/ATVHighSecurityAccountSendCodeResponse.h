@class NSDictionary, NSString;

@interface ATVHighSecurityAccountSendCodeResponse : AAResponse

@property (readonly, nonatomic) char success;
@property (readonly, nonatomic) NSDictionary *userDisplayStrings;
@property (readonly, nonatomic) NSString *errorTitle;
@property (readonly, nonatomic) NSString *errorMessage;
@property (readonly, nonatomic) long long errorCode;

@end

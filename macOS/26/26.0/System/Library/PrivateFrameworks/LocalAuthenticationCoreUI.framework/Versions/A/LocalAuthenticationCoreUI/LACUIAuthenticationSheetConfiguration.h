@class NSString, NSDictionary;

@interface LACUIAuthenticationSheetConfiguration : NSObject

@property (copy, nonatomic) NSString *callerIconPath;
@property (copy, nonatomic) NSString *callerName;
@property (copy, nonatomic) NSString *authenticationTitle;
@property (copy, nonatomic) NSString *authenticationMessage;
@property (copy, nonatomic) NSDictionary *authenticationMessageForMechanism;
@property (copy, nonatomic) NSString *authenticationHint;
@property (nonatomic) BOOL isUserNameFieldEnabled;
@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSString *passwordFieldPlaceholder;
@property (copy, nonatomic) NSString *fallbackButtonTitle;
@property (copy, nonatomic) NSString *submitButtonTitle;
@property (copy, nonatomic) NSString *companionPrompt;
@property (copy, nonatomic) NSString *dfrPrompt;

- (id)init;
- (void).cxx_destruct;

@end

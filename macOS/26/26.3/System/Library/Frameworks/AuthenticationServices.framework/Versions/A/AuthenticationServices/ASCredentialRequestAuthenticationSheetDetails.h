@class NSString;

@interface ASCredentialRequestAuthenticationSheetDetails : NSObject

@property (nonatomic) long long preferredMechanism;
@property (copy, nonatomic) NSString *authenticationTitle;
@property (copy, nonatomic) NSString *authenticationMessage;
@property (copy, nonatomic) NSString *callerName;
@property (copy, nonatomic) NSString *callerIconPath;
@property (copy, nonatomic) NSString *submitButtonTitle;
@property (copy, nonatomic) NSString *companionPrompt;

- (void).cxx_destruct;

@end

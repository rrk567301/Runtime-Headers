@class NSString;
@protocol NSURLAuthenticationChallengeSender;

@interface ISStoreAuthenticationChallenge : ISAuthenticationChallenge

@property long long failureCount;
@property char hasPassword;
@property (retain) NSString *password;
@property (weak) id<NSURLAuthenticationChallengeSender> sender;
@property (retain) NSString *user;
@property char userNameIsEditable;

- (id)init;
- (void).cxx_destruct;
- (char)userNameIsEmail;

@end

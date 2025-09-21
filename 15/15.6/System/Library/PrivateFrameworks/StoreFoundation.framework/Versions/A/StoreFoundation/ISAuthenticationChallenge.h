@class NSString;
@protocol NSURLAuthenticationChallengeSender;

@interface ISAuthenticationChallenge : NSObject

@property (retain) NSString *localizedMessage;
@property (retain) NSString *localizedTitle;
@property (readonly) char hasPassword;
@property (readonly) NSString *password;
@property (readonly) NSString *user;
@property (readonly) long long failureCount;
@property (readonly) char userNameIsEditable;
@property (readonly) char userNameIsEmail;
@property (readonly, weak) id<NSURLAuthenticationChallengeSender> sender;

- (void).cxx_destruct;
- (void)cancelAuthentication;
- (void)useCredential:(id)a0;

@end

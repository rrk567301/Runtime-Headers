@class NSString;

@interface BKSACOAuthCredentials : NSObject

@property (readonly, nonatomic) NSString *userName;
@property (readonly, nonatomic) NSString *serviceClientID;
@property (readonly, nonatomic) NSString *oauthIDToken;
@property (readonly, nonatomic) NSString *oauthAccessToken;

- (void).cxx_destruct;
- (id)initWithUserName:(id)a0 serviceClientID:(id)a1 oauthIDToken:(id)a2 oauthAccessToken:(id)a3;

@end

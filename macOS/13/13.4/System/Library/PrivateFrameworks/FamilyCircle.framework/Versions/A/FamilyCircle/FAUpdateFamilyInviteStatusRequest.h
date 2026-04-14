@class NSString, NSURL;

@interface FAUpdateFamilyInviteStatusRequest : FAFamilyCircleRequest

@property (readonly, copy) NSString *inviteCode;
@property (readonly, copy) NSURL *requestUrl;
@property (readonly) long long inviteStatus;

- (void).cxx_destruct;
- (void)startRequestWithCompletionHandler:(id /* block */)a0;
- (id)initWithInviteCode:(id)a0 inviteStatus:(long long)a1 requestUrl:(id)a2;

@end

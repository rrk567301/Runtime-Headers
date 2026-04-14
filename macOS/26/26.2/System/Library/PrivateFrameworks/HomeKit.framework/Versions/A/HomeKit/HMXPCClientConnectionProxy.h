@class NSDictionary, NSString;

@interface HMXPCClientConnectionProxy : HMFMessageTransport <HMXPCClientMessageHandling>

@property (readonly, copy) NSDictionary *userInfo;
@property (readonly) id /* block */ refreshHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleMessage:(id)a0;
- (void).cxx_destruct;
- (void)handleMessage:(id)a0 responseHandler:(id /* block */)a1;
- (void)sendMessage:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithUserInfo:(id)a0 refreshHandler:(id /* block */)a1;

@end

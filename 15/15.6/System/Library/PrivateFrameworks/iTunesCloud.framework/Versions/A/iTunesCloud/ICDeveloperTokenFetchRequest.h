@class AMSMediaTokenService, ICClientInfo;

@interface ICDeveloperTokenFetchRequest : ICRemoteRequestOperation <NSSecureCoding> {
    ICClientInfo *_clientInfo;
    unsigned long long _options;
    AMSMediaTokenService *_mediaTokenService;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long clientType;

+ (id)_createMediaTokenServiceForClientInfo:(id)a0 clientType:(long long)a1 requester:(id)a2;
+ (void)_invalidateCachedDeveloperTokenForClientInfo:(id)a0 requester:(id)a1 usingMediaTokenService:(id)a2;
+ (void)invalidateCachedDeveloperTokenForClientInfo:(id)a0 clientType:(long long)a1 requester:(id)a2 completionHandler:(id /* block */)a3;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)execute;
- (void)performRequestWithResponseHandler:(id /* block */)a0;
- (void)_didFetchMediaToken:(id)a0 withError:(id)a1;
- (id)initWithClientInfo:(id)a0;
- (id)initWithClientInfo:(id)a0 options:(unsigned long long)a1;
- (void)performRequestOnOperationQueue:(id)a0 withResponseHandler:(id /* block */)a1;

@end

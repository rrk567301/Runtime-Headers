@class LAAuthenticationServerProtocolRequest, LAAuthentication;

@interface LAAuthenticationClientTransaction : NSObject {
    BOOL _committing;
}

@property (readonly, nonatomic) LAAuthentication *authentication;
@property (nonatomic) long long counter;
@property (readonly, nonatomic) LAAuthenticationServerProtocolRequest *request;
@property (nonatomic) BOOL forceRequest;

- (void)dealloc;
- (void).cxx_destruct;
- (void)commit;
- (id)initWithAuthentication:(id)a0;

@end

@class NSString, ACAccount;

@interface AAMyPhotoRequest : AARequest {
    ACAccount *_account;
}

@property (copy, nonatomic) NSString *serverCacheTag;
@property (retain, nonatomic, setter=setiTunesAccount:) ACAccount *iTunesAccount;

+ (Class)responseClass;

- (id)urlRequest;
- (id)urlString;
- (id)initWithAccount:(id)a0;
- (void).cxx_destruct;

@end

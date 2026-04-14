@class NSString;

@interface SFSSOspreyTTSClient : OspreyChannel

@property (retain, nonatomic) NSString *deviceId;
@property (nonatomic) BOOL useBlazar;

+ (id)sharedInstance;

- (id)init;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (void)prewarm;
- (id)initWithURL:(id)a0 useBlazar:(BOOL)a1 enableAuthentication:(BOOL)a2;
- (void)streamTTS:(id)a0 beginHandler:(id /* block */)a1 chunkHandler:(id /* block */)a2 endHandler:(id /* block */)a3 completion:(id /* block */)a4;
- (void)streamNativeTTS:(id)a0 beginHandler:(id /* block */)a1 chunkHandler:(id /* block */)a2 endHandler:(id /* block */)a3 completion:(id /* block */)a4;
- (void)streamBlazarTTS:(id)a0 beginHandler:(id /* block */)a1 chunkHandler:(id /* block */)a2 endHandler:(id /* block */)a3 completion:(id /* block */)a4;

@end

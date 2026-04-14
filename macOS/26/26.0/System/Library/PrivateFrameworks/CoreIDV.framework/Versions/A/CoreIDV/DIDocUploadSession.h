@class DIDocUploadSessionClient;

@interface DIDocUploadSession : NSObject

@property (retain, nonatomic) DIDocUploadSessionClient *client;

- (id)init;
- (void).cxx_destruct;
- (void)cancelUploads;
- (void)uploadDocData:(id)a0 uploadSettings:(id)a1 completion:(id /* block */)a2;

@end

@class DIDocUploadSessionClient;

@interface DIDocUploadSession : NSObject

@property (retain, nonatomic) DIDocUploadSessionClient *client;

- (void).cxx_destruct;
- (id)init;
- (void)cancelUploads;
- (void)uploadDocData:(id)a0 uploadSettings:(id)a1 completion:(id /* block */)a2;

@end

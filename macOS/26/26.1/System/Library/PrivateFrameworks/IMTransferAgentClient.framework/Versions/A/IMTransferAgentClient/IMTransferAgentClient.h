@interface IMTransferAgentClient : NSObject

+ (id)sharedInstance;

- (void)downloadRCSTransferOnSimID:(id)a0 transferURL:(id)a1 destURL:(id)a2 cryptoMaterial:(id)a3 completion:(id /* block */)a4;
- (void)_downloadRCSTransferOnSimID:(id)a0 transferURL:(id)a1 destURL:(id)a2 cryptoMaterial:(id)a3 retries:(long long)a4 completion:(id /* block */)a5;
- (void)_uploadRCSFileOnSimID:(id)a0 fileURL:(id)a1 thumbURL:(id)a2 isAudioMessage:(BOOL)a3 encrypted:(BOOL)a4 userInfo:(id)a5 retries:(unsigned long long)a6 completion:(id /* block */)a7;
- (void)uploadRCSFileOnSimID:(id)a0 fileURL:(id)a1 thumbURL:(id)a2 isAudioMessage:(BOOL)a3 encrypted:(BOOL)a4 userInfo:(id)a5 completion:(id /* block */)a6;

@end

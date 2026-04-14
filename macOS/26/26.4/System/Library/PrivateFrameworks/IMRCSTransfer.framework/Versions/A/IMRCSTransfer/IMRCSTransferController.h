@interface IMRCSTransferController : NSObject

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)receiveTransferOnSimID:(id)a0 transferURL:(id)a1 destURL:(id)a2 cryptoMaterial:(id)a3 completion:(id /* block */)a4;
- (void)sendTransferOnSimID:(id)a0 fileURL:(id)a1 thumbURL:(id)a2 isAudioMessage:(BOOL)a3 encrypted:(BOOL)a4 userInfo:(id)a5 completion:(id /* block */)a6;

@end

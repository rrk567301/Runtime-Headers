@class CKStoreClient;

@interface CKSigningSession : NSObject

@property (readonly, nonatomic) CKStoreClient *storeClient;
@property (retain, nonatomic) id sessionToken;
@property (readonly, nonatomic) BOOL isSessionOpen;

+ (id)signJavaScriptString:(id)a0;

- (id)signData:(id)a0 error:(id *)a1;
- (void)dealloc;
- (id)initWithStoreClient:(id)a0;
- (void).cxx_destruct;
- (void)closeSession;
- (void)openPrimedSessionWithCompletionHandler:(id /* block */)a0;
- (void)openSessionWithCompletionHandler:(id /* block */)a0;
- (void)processSignature:(id)a0;

@end

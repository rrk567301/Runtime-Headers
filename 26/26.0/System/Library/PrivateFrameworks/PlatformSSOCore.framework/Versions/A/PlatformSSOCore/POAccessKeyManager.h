@class NSObject, NSDate, TKTokenWatcher;
@protocol OS_xpc_object;

@interface POAccessKeyManager : NSObject

@property (retain) TKTokenWatcher *tokenWatcher;
@property (retain) NSObject<OS_xpc_object> *tokenEndpoint;
@property (retain) NSObject *testKeyObserver;
@property (copy, nonatomic) NSDate *start;
@property (readonly, nonatomic) unsigned int uid;

- (void)stopListening;
- (void)startListening;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)initWithUid:(unsigned int)a0;
- (void)performTokenOperationsWithSigningKey:(struct __SecKey { } *)a0 encryptionKey:(struct __SecKey { } *)a1 tokenId:(id)a2;
- (void)setupTokenWatcher;

@end

@class NSData, NSDate, NSObject, TKTokenWatcher;
@protocol OS_xpc_object;

@interface POAccessKeyManager : NSObject

@property (retain) TKTokenWatcher *tokenWatcher;
@property (retain) NSObject<OS_xpc_object> *tokenEndpoint;
@property (retain) NSObject *testKeyObserver;
@property BOOL authRequired;
@property (copy, nonatomic) NSData *tciData;
@property BOOL observingSlots;
@property (copy, nonatomic) NSDate *start;
@property (readonly, nonatomic) unsigned int uid;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)stopListening;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithUid:(unsigned int)a0;
- (void)performTokenOperationsWithSigningKey:(struct __SecKey { } *)a0 encryptionKey:(struct __SecKey { } *)a1 tokenId:(id)a2;
- (void)setupTokenWatcher;
- (void)startListeningWithAuthRequired:(BOOL)a0 tciData:(id)a1;

@end

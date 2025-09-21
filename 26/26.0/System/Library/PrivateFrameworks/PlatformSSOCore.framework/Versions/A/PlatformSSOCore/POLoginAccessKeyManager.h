@class POTokenHelper, NSDate, NSObject, POAuthPluginCoreProcess;
@protocol OS_os_transaction;

@interface POLoginAccessKeyManager : POAuthenticationAccessKeyManager

@property (retain, nonatomic) NSObject<OS_os_transaction> *listeningTransaction;
@property (retain, nonatomic) POTokenHelper *tokenHelper;
@property (retain, nonatomic) POAuthPluginCoreProcess *systemAuthPluginProcess;
@property (retain) NSDate *end;
@property (readonly) BOOL isListening;

- (void)stopListening;
- (BOOL)startListening;
- (void).cxx_destruct;
- (id)initWithUid:(unsigned int)a0 identifierProvider:(id)a1;
- (void)notifyCtkScanCompleteForUserName:(id)a0 tokenId:(id)a1 keyHash:(id)a2 context:(id)a3 error:(id)a4;
- (void)performTokenOperationsWithSigningKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0 encryptionKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a1 tokenId:(id)a2;
- (void)resetTokenWatcher;
- (void)setUserIdentifierProvider:(id)a0;

@end

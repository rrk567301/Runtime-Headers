@class NSData, NSString;

@interface LACSUnmanagedContext : NSObject <LACSContext> {
    NSData *_externalizedContextRef;
    struct __ACMHandle { } *_contextRef;
    BOOL _ownsContextRef;
}

@property (readonly, nonatomic) NSData *contextRef;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init:(id *)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_decryptData:(id)a0 seed:(id)a1 externalizedContext:(id)a2 error:(id *)a3;
- (id)_encryptData:(id)a0 seed:(id)a1 externalizedContext:(id)a2 error:(id *)a3;
- (id)_encryptionSeedForContext:(struct __ACMHandle { } *)a0 error:(id *)a1;
- (BOOL)_withContext:(id /* block */)a0 error:(id *)a1;
- (id)externalize;
- (id)fetchCredentialData:(id *)a0;
- (id)initWithACMContextRef:(struct __ACMHandle { } *)a0 ownsContextRef:(BOOL)a1;
- (id)initWithContextRef:(id)a0 error:(id *)a1;
- (BOOL)storeCredentialData:(id)a0 securely:(BOOL)a1 error:(id *)a2;

@end

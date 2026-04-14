@class STSSession, NSData, STSCredential;
@protocol STSSessionDelegate;

@interface STSTransactionHandler : NSObject

@property (retain, nonatomic) STSCredential *activeSTSCredential;
@property (readonly, nonatomic) unsigned char supportedCredentialType;
@property (readonly, weak, nonatomic) id<STSSessionDelegate> delegate;
@property (readonly, weak, nonatomic) STSSession *parent;
@property (readonly, nonatomic) NSData *handoffToken;

- (void).cxx_destruct;
- (id)activate;
- (id)initWithParent:(id)a0;
- (void)_tearDown;
- (id)setActiveCredential:(id)a0;
- (id)startTransactionWithAuthorization:(id)a0 options:(unsigned long long)a1;
- (id)stopTransaction;
- (id)activateWithDelegate:(id)a0 handoffToken:(id)a1;
- (void)tearDownWithCompletion:(id /* block */)a0;
- (id)activateWithDelegate:(id)a0;

@end

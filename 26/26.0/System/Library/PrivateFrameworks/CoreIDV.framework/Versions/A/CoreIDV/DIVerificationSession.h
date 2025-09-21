@class DIVClient, NSError, DIVerificationSessionContext;

@interface DIVerificationSession : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    DIVClient *_client;
    DIVerificationSessionContext *_context;
    NSError *_configureError;
}

@property (readonly, nonatomic) DIVerificationSessionContext *context;

+ (void)concludeVerification:(id)a0;

- (void)setClient:(id)a0;
- (id)initWithContext:(id)a0;
- (void)setContext:(id)a0;
- (void)invalidate;
- (id)client;
- (void).cxx_destruct;
- (void)concludeVerification;
- (id)configureError;
- (void)confirmVerificationCompletedWithFeedback:(id)a0;
- (void)getVerificationResultWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)performVerificationWithAttributes:(id)a0 completion:(id /* block */)a1;
- (void)setConfigureError:(id)a0;
- (void)shareVerificationResultWithOptions:(id)a0 completion:(id /* block */)a1;

@end

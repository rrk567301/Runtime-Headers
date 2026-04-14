@class NSMutableDictionary;
@protocol DATrustHandlerDelegate;

@interface DATrustHandler : NSObject

@property (weak, nonatomic) id<DATrustHandlerDelegate> delegate;
@property (retain, nonatomic) NSMutableDictionary *haveWarnedAboutCertDict;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (BOOL)resetCertWarnings;
- (BOOL)handleTrustChallenge:(id)a0 forAccount:(id)a1;
- (BOOL)handleTrustChallenge:(id)a0 forAccount:(id)a1 completionHandler:(id /* block */)a2;
- (unsigned int)evaluateTrust:(struct __SecTrust { } *)a0;
- (BOOL)haveWarnedAboutCert:(id)a0 forHost:(id)a1;
- (id)_serverSuffixesToAlwaysFail;
- (void)handleTrust:(struct __SecTrust { } *)a0 forHost:(id)a1 forAccount:(id)a2 withCompletionBlock:(id /* block */)a3;
- (void)setHaveWarnedAboutCert:(id)a0 forHost:(id)a1;

@end

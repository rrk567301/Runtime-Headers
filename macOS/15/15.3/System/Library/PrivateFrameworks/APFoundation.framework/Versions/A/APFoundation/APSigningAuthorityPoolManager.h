@class APUnfairRecursiveLock, NSString, APBackoffTimer, NSMutableArray, APSigningAuthority;

@interface APSigningAuthorityPoolManager : NSObject <APBackoffTimerDelegate, APSigningAuthorityPoolManagement>

@property (nonatomic) unsigned long long poolSize;
@property (nonatomic) unsigned long long numberToStash;
@property (retain, nonatomic) APSigningAuthority *currentSigningAuthority;
@property (retain, nonatomic) NSMutableArray *signingAuthorityPool;
@property (retain, nonatomic) APUnfairRecursiveLock *lock;
@property (nonatomic) double lastStateChangeTime;
@property (nonatomic) double refillStartTime;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) APBackoffTimer *backoffTimer;
@property (copy, nonatomic) id /* block */ setupCompletion;
@property (readonly, nonatomic) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setState:(long long)a0;
- (id)signatureForData:(id)a0 error:(id *)a1;
- (void)_addSigningAuthorityToPool:(id)a0;
- (void)_callSetupCompletionHandler;
- (void)_clearStashedContextsIfIndicated;
- (void)_evaluateRotationEntitlement;
- (void)_handleCompletedSigningAuthority:(id)a0;
- (unsigned long long)_numSigningAuthoritiesToCreate;
- (void)_refillSigningAuthorityPool;
- (void)_removeAllSigningAuthorities;
- (void)_removeSigningAuthority:(id)a0 shouldRefill:(BOOL)a1;
- (BOOL)_rotateWithError:(id *)a0;
- (void)backoffTimerFired;
- (void)cancelBackoff;
- (void)enterBackoff;
- (id)initWithName:(id)a0 poolSize:(unsigned long long)a1 numberToStash:(unsigned long long)a2;
- (id)initWithName:(id)a0 poolSize:(unsigned long long)a1 numberToStash:(unsigned long long)a2 setupCompletion:(id /* block */)a3;
- (BOOL)rotateWithError:(id *)a0;
- (void)setupWithCompletion:(id /* block */)a0;
- (void)setupWithTimeout:(double)a0 completion:(id /* block */)a1;
- (id)signatureForRawData:(id)a0 error:(id *)a1;

@end

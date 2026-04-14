@class NSString, APUnfairLock, NSMutableArray, APSigningAuthority;

@interface APSigningAuthorityPoolManager : NSObject <APSigningAuthorityPoolManagement>

@property (nonatomic) long long poolSize;
@property (retain, nonatomic) APSigningAuthority *currentSigningAuthority;
@property (retain, nonatomic) NSMutableArray *signingAuthorityPool;
@property (retain, nonatomic) APUnfairLock *lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_validateAllowListingForPoolCreation:(id)a0;
+ (BOOL)_hasEntitlement:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)_rotate;
- (void)rotate;
- (void)_signingAuthorityStateChanged:(id)a0;
- (id)initWithPoolSize:(long long)a0;
- (BOOL)isValidSignature:(id)a0 forData:(id)a1 error:(id *)a2;
- (id)signatureForData:(id)a0 error:(id *)a1;
- (id)signatureForRawData:(id)a0 error:(id *)a1;
- (id)signingAuthority;
- (void)_refillSigningAuthorityPool;
- (void)_removeSigningAuthority:(id)a0;
- (void)_validateSigningAuthority:(id)a0;
- (void)_removeNotificationObserverForSigningAuthority:(id)a0;

@end

@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface SKAAccountProvider : NSObject <SKAAccountProviding>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *tokenFetchQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logger;

- (id)init;
- (void).cxx_destruct;
- (void)refreshCredentialForPrimaryAccountWithCompletion:(id /* block */)a0;
- (id)jwtTokenForPrimaryAccountWithError:(id *)a0;
- (id)_primarySystemiCloudAccountWithError:(id *)a0;
- (BOOL)_shouldAttemptReauth;
- (void)_markReauthAttempt;
- (long long)_maxReauthCount;
- (long long)_authResetTime;

@end

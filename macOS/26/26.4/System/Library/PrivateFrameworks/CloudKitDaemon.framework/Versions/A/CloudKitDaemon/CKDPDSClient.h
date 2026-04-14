@class NSCache, PDSRegistrar, NSObject;
@protocol OS_dispatch_queue;

@interface CKDPDSClient : NSObject

@property (readonly, nonatomic) NSCache *registrars;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) PDSRegistrar *registrar;

+ (id)sharedClient;

- (id)inlock_registrarForUser:(id)a0 shouldCache:(BOOL)a1;
- (id)initInternal;
- (BOOL)_unregisterRegistration:(id)a0 forDSID:(id)a1 outError:(id *)a2;
- (BOOL)unregisterTokenForContainer:(id)a0 outError:(id *)a1;
- (id)_pdsQualifierFromContainerID:(id)a0;
- (id)_registrationForAppContainerAccountTuple:(id)a0 pushBundleIdentifier:(id)a1 pdsPushEnvironment:(char)a2;
- (BOOL)ensureRegistrationForContainer:(id)a0 outError:(id *)a1;
- (void).cxx_destruct;
- (char)_pdsPushEnvironmentFromAPSEnvironmentString:(id)a0;
- (id)inlock_registrarForDSID:(id)a0 shouldCache:(BOOL)a1;
- (BOOL)unregisterAllTokensForAccountID:(id)a0 outError:(id *)a1;
- (id)inlock_registrar;
- (void)unregisterAllTokens;
- (void)_expungeStaleDSIDs;
- (id)_pdsTopicFromBundleIdentifier:(id)a0 withContainerID:(id)a1;
- (id)_registrationForContainer:(id)a0;

@end

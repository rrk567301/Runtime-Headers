@class PDSRegistrar, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CKDPDSClient : NSObject

@property (retain, nonatomic) NSMutableDictionary *registrationsByDSID;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) PDSRegistrar *registrar;

+ (id)sharedClient;

- (id)_init;
- (void).cxx_destruct;
- (id)inlock_registrar;
- (id)inlock_registrationsForDSID:(id)a0;
- (char)_pdsPushEnvironmentFromAPSEnvironmentString:(id)a0;
- (id)_pdsQualifierFromContainerID:(id)a0;
- (id)_pdsTopicFromBundleIdentifier:(id)a0 withContainerID:(id)a1;
- (id)_registrationForContainer:(id)a0;
- (id)_registrationForAppContainerAccountTuple:(id)a0 pushBundleIdentifier:(id)a1 pdsPushEnvironment:(char)a2;
- (BOOL)ensureRegistrationForContainer:(id)a0 outError:(id *)a1;
- (void)expungeStaleDSIDs;
- (BOOL)_unregisterRegistration:(id)a0 forDSID:(id)a1 outError:(id *)a2;
- (BOOL)unregisterTokenForContainer:(id)a0 outError:(id *)a1;
- (BOOL)unregisterAllTokensForAccountID:(id)a0 outError:(id *)a1;
- (void)unregisterAllTokens;

@end

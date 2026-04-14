@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue, MDMClientDataProvider;

@interface MDMClient : NSObject

@property (retain, nonatomic) id<MDMClientDataProvider> dataProvider;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *xpcConnectionSyncQueue;

+ (id)sharedClient;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDataProvider:(id)a0;
- (BOOL)isManagedByMDM;
- (void)reauthenticationComplete;
- (void)blockAppInstallsWithCompletion:(id /* block */)a0;
- (void)unblockAppInstallsWithCompletion:(id /* block */)a0;
- (void)simulatePushWithCompletion:(id /* block */)a0;
- (void)getAssertionDescriptionsWithCompletion:(id /* block */)a0;
- (void)_queue_createAndStartMDMXPCConnection;
- (void)_destroyXPCConnectionAndInvalidate:(BOOL)a0;
- (void)scheduleTokenUpdate;
- (void)simulatePush;
- (void)simulatePushIfNetworkTetheredWithCompletion:(id /* block */)a0;
- (void)migrateMDMWithContext:(int)a0 completion:(id /* block */)a1;
- (void)processDeviceRequest:(id)a0 encodeResponse:(BOOL)a1 completion:(id /* block */)a2;
- (void)requestInstallOfAppsInRestoreWithCompletion:(id /* block */)a0;
- (id)userEnrollmentAuthenticationDictWithEnrollmentID:(id)a0;
- (id)deviceEnrollmentAuthenticationDict;
- (int)accessRights;
- (BOOL)authenticateWithCheckInURL:(id)a0 identity:(struct __SecIdentity { } *)a1 pinnedSecCertificateRefs:(id)a2 pinningRevocationCheckRequired:(BOOL)a3 topic:(id)a4 useDevelopmentAPNS:(BOOL)a5 signMessage:(BOOL)a6 isUserEnrollment:(BOOL)a7 enrollmentID:(id)a8 outError:(id *)a9;
- (BOOL)checkOutCheckInURL:(id)a0 identity:(struct __SecIdentity { } *)a1 pinnedSecCertificateRefs:(id)a2 pinningRevocationCheckRequired:(BOOL)a3 topic:(id)a4 signMessage:(BOOL)a5 isUserEnrollment:(BOOL)a6 enrollmentID:(id)a7 outError:(id *)a8;
- (BOOL)remoteManagementCheckInURL:(id)a0 identity:(struct __SecIdentity { } *)a1 pinnedSecCertificateRefs:(id)a2 pinningRevocationCheckRequired:(BOOL)a3 signMessage:(BOOL)a4 isUserEnrollment:(BOOL)a5 enrollmentID:(id)a6 endpoint:(id)a7 requestData:(id)a8 outResponse:(id *)a9 outError:(id *)a10;
- (void)notifyNewConfiguration;
- (void)scheduleTokenUpdateIfNecessary;
- (void)retryNotNowResponse;
- (void)uprootMDM;
- (BOOL)isActivationLockAllowedWhileSupervised;

@end

@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue, MDMClientDataProvider;

@interface MDMClientCore : NSObject

@property (nonatomic) unsigned long long channelType;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *xpcConnectionSyncQueue;
@property (retain, nonatomic) id<MDMClientDataProvider> dataProvider;

+ (id)clientWithChannelType:(unsigned long long)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)pushToken;
- (void)reauthenticationComplete;
- (void)blockAppInstallsWithCompletion:(id /* block */)a0;
- (void)unblockAppInstallsWithCompletion:(id /* block */)a0;
- (id)initWithChannelType:(unsigned long long)a0;
- (void)simulatePushWithCompletion:(id /* block */)a0;
- (void)simulatePushIfNetworkTetheredWithCompletion:(id /* block */)a0;
- (void)touchWithCompletion:(id /* block */)a0;
- (void)getAssertionDescriptionsWithCompletion:(id /* block */)a0;
- (void)migrateMDMWithContext:(int)a0 completion:(id /* block */)a1;
- (void)processDeviceRequest:(id)a0 encodeResponse:(BOOL)a1 completion:(id /* block */)a2;
- (void)requestInstallOfAppsInRestoreWithCompletion:(id /* block */)a0;
- (void)processUserRequest:(id)a0 encodeResponse:(BOOL)a1 completion:(id /* block */)a2;
- (id)initWithChannelType:(unsigned long long)a0 dataProvider:(id)a1;
- (BOOL)isActivationLockAllowedWhileSupervised;
- (unsigned long long)accessRights;
- (void)notifyNewConfiguration;
- (void)scheduleTokenUpdate;
- (void)scheduleTokenUpdateIfNecessary;
- (void)retryNotNowResponse;
- (void)simulatePush;
- (void)uprootMDM;
- (BOOL)authenticateWithCheckInURL:(id)a0 identity:(struct __SecIdentity { } *)a1 pinnedSecCertificateRefs:(id)a2 pinningRevocationCheckRequired:(BOOL)a3 topic:(id)a4 useDevelopmentAPNS:(BOOL)a5 signMessage:(BOOL)a6 isUserEnrollment:(BOOL)a7 enrollmentID:(id)a8 outError:(id *)a9;
- (BOOL)checkOutCheckInURL:(id)a0 identity:(struct __SecIdentity { } *)a1 pinnedSecCertificateRefs:(id)a2 pinningRevocationCheckRequired:(BOOL)a3 topic:(id)a4 signMessage:(BOOL)a5 isUserEnrollment:(BOOL)a6 enrollmentID:(id)a7 outError:(id *)a8;
- (BOOL)remoteManagementCheckInURL:(id)a0 identity:(struct __SecIdentity { } *)a1 pinnedSecCertificateRefs:(id)a2 pinningRevocationCheckRequired:(BOOL)a3 signMessage:(BOOL)a4 isUserEnrollment:(BOOL)a5 enrollmentID:(id)a6 endpoint:(id)a7 requestData:(id)a8 outResponse:(id *)a9 outError:(id *)a10;
- (id)_userFieldsForResponse;
- (void)_destroyXPCConnectionAndInvalidate:(BOOL)a0;
- (void)_queue_createAndStartMDMXPCConnection;
- (id)_userEnrollmentAuthenticationDictWithEnrollmentID:(id)a0;
- (id)_deviceEnrollmentAuthenticationDict;

@end

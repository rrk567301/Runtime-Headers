@class NSString, NSXPCConnection, TransparencyApplication;

@interface KTVerifier : NSObject

@property (retain) TransparencyApplication *application;
@property (readonly) NSString *applicationIdentifier;
@property (readonly) NSXPCConnection *connection;

- (void).cxx_destruct;
- (id)initWithApplication:(id)a0;
- (void)clearState:(id /* block */)a0;
- (void)validatePeerUriResult:(id)a0 uuid:(id)a1 completionBlock:(id /* block */)a2;
- (void)validateSelfUriResult:(id)a0 uuid:(id)a1 syncedDatas:(id)a2 completionBlock:(id /* block */)a3;
- (void)validateEnrollmentUriResult:(id)a0 uuid:(id)a1 completionBlock:(id /* block */)a2;
- (void)convertToSelfRequest:(id)a0 serverDatas:(id)a1 syncedDatas:(id)a2 accountKey:(id)a3 queryRequest:(id)a4 queryResponse:(id)a5 updateCompletionBlock:(id /* block */)a6;
- (void)forceValidateUUID:(id)a0 uri:(id)a1 block:(id /* block */)a2;
- (void)resetRequestToPending:(id)a0 block:(id /* block */)a1;
- (void)forceConfigUpdate:(id /* block */)a0;
- (void)copyLogClientConfiguration:(id /* block */)a0;
- (void)copyKeyStoreState:(id /* block */)a0;
- (void)copyKeyStoreStateFromDisk:(id /* block */)a0;
- (void)clearLogClientConfiguration:(id /* block */)a0;
- (void)copyDataStoreStatistics:(id /* block */)a0;
- (void)copyDaemonState:(id /* block */)a0;
- (id)validatePeerUri:(id)a0 accountID:(id)a1 accountKey:(id)a2 loggableDatas:(id)a3 queryRequest:(id)a4 queryResponse:(id)a5 error:(id *)a6;
- (void)invokeXPCSynchronousCallWithBlock:(id /* block */)a0 failureBlock:(id /* block */)a1;
- (id)validateEnrollmentUri:(id)a0 accountID:(id)a1 accountKey:(id)a2 loggableData:(id)a3 queryRequest:(id)a4 insertResponse:(id)a5 error:(id *)a6;
- (void)validatePeerUri:(id)a0 accountID:(id)a1 accountKey:(id)a2 loggableDatas:(id)a3 queryResponse:(id)a4 promiseCompletionBlock:(id /* block */)a5;
- (void)invokeXPCAsynchronousCallWithBlock:(id /* block */)a0 failureBlock:(id /* block */)a1;
- (void)validateEnrollmentUri:(id)a0 accountID:(id)a1 accountKey:(id)a2 loggableData:(id)a3 insertResponse:(id)a4 promiseCompletionBlock:(id /* block */)a5;
- (void)convertToSelfRequest:(id)a0 serverDatas:(id)a1 syncedDatas:(id)a2 queryRequest:(id)a3 queryResponse:(id)a4 updateCompletionBlock:(id /* block */)a5;
- (id)validatePeerUri:(id)a0 accountID:(id)a1 loggableDatas:(id)a2 queryResponse:(id)a3 error:(id *)a4;
- (id)validatePeerUri:(id)a0 accountKey:(id)a1 loggableDatas:(id)a2 queryResponse:(id)a3 error:(id *)a4;
- (id)validatePeerUri:(id)a0 accountKey:(id)a1 loggableDatas:(id)a2 queryRequest:(id)a3 queryResponse:(id)a4 error:(id *)a5;
- (id)validateEnrollmentUri:(id)a0 accountID:(id)a1 loggableData:(id)a2 insertResponse:(id)a3 error:(id *)a4;
- (id)validateEnrollmentUri:(id)a0 accountKey:(id)a1 loggableData:(id)a2 insertResponse:(id)a3 error:(id *)a4;
- (id)validateEnrollmentUri:(id)a0 accountKey:(id)a1 loggableData:(id)a2 queryRequest:(id)a3 insertResponse:(id)a4 error:(id *)a5;
- (void)validatePeerUri:(id)a0 accountKey:(id)a1 loggableDatas:(id)a2 queryResponse:(id)a3 promiseCompletionBlock:(id /* block */)a4;
- (void)validatePeerUri:(id)a0 accountID:(id)a1 loggableDatas:(id)a2 queryResponse:(id)a3 promiseCompletionBlock:(id /* block */)a4;
- (void)validateEnrollmentUri:(id)a0 accountKey:(id)a1 loggableData:(id)a2 insertResponse:(id)a3 promiseCompletionBlock:(id /* block */)a4;
- (void)validateEnrollmentUri:(id)a0 accountID:(id)a1 loggableData:(id)a2 insertResponse:(id)a3 promiseCompletionBlock:(id /* block */)a4;
- (void)convertToSelfRequest:(id)a0 serverDatas:(id)a1 syncedDatas:(id)a2 queryResponse:(id)a3 updateCompletionBlock:(id /* block */)a4;
- (void)convertToSelfRequest:(id)a0 serverDatas:(id)a1 syncedDatas:(id)a2 accountKey:(id)a3 queryResponse:(id)a4 updateCompletionBlock:(id /* block */)a5;
- (void)forceApplicationKeysFetch:(id /* block */)a0;
- (void)forceApplicationKeysDownload:(id /* block */)a0;
- (void)forceApplicationConfig:(id /* block */)a0;
- (void)copyApplicationState:(id /* block */)a0;
- (void)forceDutyCycle:(id /* block */)a0;
- (void)clearPublicKeyStoreState:(id /* block */)a0;
- (void)copyApplicationTranscript:(id /* block */)a0;

@end

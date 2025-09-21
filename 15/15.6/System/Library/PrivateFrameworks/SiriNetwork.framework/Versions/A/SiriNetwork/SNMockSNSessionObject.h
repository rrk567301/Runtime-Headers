@class NSString, NSError, NSObject;
@protocol OS_dispatch_data;

@interface SNMockSNSessionObject : NSObject <SNSessionObject, SNThunking> {
    NSObject<OS_dispatch_data> *_data;
    NSError *serializedAceDataError;
}

@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (char)isProvisional;
- (char)isRestartable;
- (char)siriCore_supportedByLocalSession;
- (void)logDiagnostics;
- (char)supportedByRemoteLimitedSession;
- (char)bufferingAllowedDuringActiveSession;
- (char)isRetryable;
- (id)serializedAceDataError:(id *)a0;
- (id)sessionRequestId;
- (void)setDispatchData:(id)a0;
- (void)setSerializedAceDataError:(id)a0;
- (void)setSessionRequestId:(id)a0;
- (void)siriNetwork_invokeThunk;
- (char)supportedByLocalSession;

@end

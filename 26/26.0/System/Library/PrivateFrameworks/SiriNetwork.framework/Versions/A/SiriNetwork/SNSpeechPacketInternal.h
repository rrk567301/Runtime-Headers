@class NSString, NSArray;

@interface SNSpeechPacketInternal : NSObject <SNThunking> {
    void /* function */ internalAceId;
    void /* function */ internalRefId;
    void /* function */ packets;
}

@property (nonatomic, copy) NSString *internalAceId;
@property (nonatomic, copy) NSString *internalRefId;
@property (nonatomic, copy) NSArray *packets;
@property (nonatomic) long long packetNumber;

- (BOOL)isProvisional;
- (id)init;
- (void)logDiagnostics;
- (void).cxx_destruct;
- (BOOL)isRestartable;
- (BOOL)supportedByRemoteLimitedSession;
- (BOOL)bufferingAllowedDuringActiveSession;
- (BOOL)isRetryable;
- (id)serializedAceDataAndReturnError:(id *)a0;
- (id)sessionRequestId;
- (void)setSessionRequestId:(id)a0;
- (void)siriNetwork_invokeThunk;
- (BOOL)supportedByLocalSession;

@end

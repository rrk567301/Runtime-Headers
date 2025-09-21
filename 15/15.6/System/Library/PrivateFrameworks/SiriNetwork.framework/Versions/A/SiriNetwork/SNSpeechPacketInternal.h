@class NSString, NSArray;

@interface SNSpeechPacketInternal : NSObject <SNThunking> {
    void /* unknown type, empty encoding */ internalAceId;
    void /* unknown type, empty encoding */ internalRefId;
    void /* unknown type, empty encoding */ packets;
}

@property (nonatomic, copy) NSString *internalAceId;
@property (nonatomic, copy) NSString *internalRefId;
@property (nonatomic, copy) NSArray *packets;
@property (nonatomic) void /* unknown type, empty encoding */ packetNumber;

- (id)init;
- (void).cxx_destruct;
- (char)isProvisional;
- (char)isRestartable;
- (void)logDiagnostics;
- (char)supportedByRemoteLimitedSession;
- (char)bufferingAllowedDuringActiveSession;
- (char)isRetryable;
- (id)serializedAceDataAndReturnError:(id *)a0;
- (id)sessionRequestId;
- (void)setSessionRequestId:(id)a0;
- (void)siriNetwork_invokeThunk;
- (char)supportedByLocalSession;

@end

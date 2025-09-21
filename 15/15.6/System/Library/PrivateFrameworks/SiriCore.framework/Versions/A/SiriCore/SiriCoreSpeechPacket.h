@class NSString, NSArray;

@interface SiriCoreSpeechPacket : NSObject <SiriCoreThunking, SiriCoreSessionObject>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSArray *packets;
@property (nonatomic) long long packetNumber;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)groupIdentifier;
- (id)encodedClassName;
- (char)siriCore_bufferingAllowedDuringActiveSession;
- (void)siriCore_invokeThunk;
- (char)siriCore_isProvisional;
- (char)siriCore_isRestartable;
- (char)siriCore_isRetryable;
- (void)siriCore_logDiagnostics;
- (id)siriCore_requestId;
- (id)siriCore_serializedAceDataError:(id *)a0;
- (void)siriCore_setSessionRequestId:(id)a0;
- (char)siriCore_supportedByLocalSession;
- (char)siriCore_supportedByRemoteLimitedSession;

@end

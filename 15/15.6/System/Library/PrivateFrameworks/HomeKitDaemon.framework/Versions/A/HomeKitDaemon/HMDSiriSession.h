@class HMDSiriStreamStartEvent, NSObject, NSString, HMDActiveSiriSessionInfo, NSNumber, HMDSiriRemoteInputServer;
@protocol OS_xpc_object, HMMLogEventSubmitting, OS_os_log;

@interface HMDSiriSession : NSObject <HMDActiveSiriSessionInfoDelegate, HMFLogging> {
    NSObject<OS_os_log> *_logger;
}

@property (readonly, nonatomic) id<HMMLogEventSubmitting> logEventSubmitter;
@property (retain, nonatomic) HMDSiriStreamStartEvent *streamStartMetric;
@property (weak, nonatomic) HMDSiriRemoteInputServer *server;
@property (retain, nonatomic) HMDActiveSiriSessionInfo *activeSessionInfo;
@property (retain, nonatomic) NSNumber *deviceType;
@property (nonatomic) char isActivationPending;
@property (retain, nonatomic) NSObject<OS_xpc_object> *boostMessage;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)siriSessionForUI;

- (void).cxx_destruct;
- (void)invalidate;
- (void)publish;
- (void)deactivate;
- (void)sendMsg:(const char *)a0 args:(id)a1;
- (void)stopStream;
- (char)activateWithAccessory:(id)a0 metadata:(id)a1;
- (id)_createArgsDictionaryWithError:(id)a0;
- (char)_startStream;
- (char)activateAfterHubInitiation;
- (id)activeSessionToken;
- (void)activeSiriSession:(id)a0 didCreateAudioFrame:(id)a1 sequenceNumber:(id)a2 gain:(id)a3;
- (void)activeSiriSession:(id)a0 didReceiveButtonUpWithDuration:(id)a1;
- (void)activeSiriSession:(id)a0 didReceiveFirstPassMetadata:(id)a1;
- (void)activeSiriSessionDidStop:(id)a0;
- (void)beginTrackingStreamStartMetricWithActivationType:(unsigned long long)a0;
- (void)handleResetStream;
- (void)handleStartStream;
- (void)handleStopStream;
- (id)initWithIdentifier:(id)a0 deviceType:(id)a1;
- (id)initWithIdentifier:(id)a0 logEventSubmitter:(id)a1 deviceType:(id)a2;
- (void)maybeSubmitStreamStartMetricWithError:(id)a0;
- (void)setActiveBulkSendSession:(id)a0;

@end

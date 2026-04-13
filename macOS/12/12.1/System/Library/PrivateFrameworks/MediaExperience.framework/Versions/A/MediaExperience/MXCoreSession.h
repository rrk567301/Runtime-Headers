@class AuRA_IOControllerHints, NSString, NSArray, NSData, MXAuRATranslator, NSNumber;
@protocol AuRA_ClientProcess;

@interface MXCoreSession : MXCoreSessionBase {
    MXAuRATranslator *mMXAuRATranslator;
}

@property (nonatomic) struct { unsigned int val[8]; } auditToken;
@property (nonatomic) BOOL mixesWithEveryone;
@property (nonatomic) BOOL stopsWhenDeviceLocks;
@property (nonatomic) BOOL hasInput;
@property (retain, nonatomic) NSNumber *routeSharingPolicy;
@property (nonatomic) BOOL doesntActuallyPlayAudio;
@property (retain, nonatomic) NSNumber *categoryOptions;
@property (retain, nonatomic) AuRA_IOControllerHints *ioControllerHintsStandard;
@property (retain, nonatomic) id<AuRA_ClientProcess> clientProcess;
@property (copy, nonatomic) id /* block */ activationHandler;
@property (copy, nonatomic) id /* block */ deactivationHandler;
@property (retain, nonatomic) NSData *disallowedPorts;
@property (retain, nonatomic) NSNumber *outputPortOverride;
@property (retain, nonatomic) NSString *preferredInput;
@property (retain, nonatomic) NSString *preferredOutput;
@property (retain, nonatomic) NSArray *ioControllerHintsDecoupled;
@property (readonly, nonatomic) NSString *remoteDeviceID;
@property (retain, nonatomic) NSNumber *originatingProcessToken;
@property (retain, nonatomic) NSNumber *processOwningIOResources;
@property (nonatomic) struct __SecTask { } *secTask;
@property (nonatomic) long long activationFlags;
@property (nonatomic) BOOL isTestSession;
@property (nonatomic) BOOL resumeOthers;
@property (nonatomic) BOOL hasPhoneCallBehavior;

+ (id)copyMXCoreSessionForMXSessionID:(unsigned long long)a0;
+ (id)copyMXCoreSession:(unsigned long long)a0;

- (void)dealloc;
- (int)setAudioCategory:(id)a0;
- (int)setAudioMode:(id)a0;
- (int)setIsPlaying:(BOOL)a0;
- (int)setIsRecording:(BOOL)a0;
- (BOOL)isRecording;
- (void)setAudioSessionID:(unsigned int)a0;
- (void)callbackClient:(int)a0 activateCalled:(BOOL)a1;
- (id)copyMXSessionList;
- (int)activate:(struct __SecTask { } *)a0 flags:(long long)a1 mxSessionID:(id)a2 completionHandler:(id /* block */)a3;
- (int)deactivate:(struct __SecTask { } *)a0 resumeOthers:(BOOL)a1 mxSessionID:(id)a2 completionHandler:(id /* block */)a3;
- (id)initWithMXSession:(id)a0 clientPID:(int)a1 remoteDeviceID:(id)a2 auditToken:(struct { unsigned int x0[8]; })a3 mxCoreSessionID:(unsigned long long)a4;
- (void)registerMXSession:(id)a0 mxCoreSessionID:(id)a1;
- (void)unregisterMXSession:(unsigned long long)a0;
- (id)IOControllersForMXSession:(unsigned long long)a0;
- (id)virtualPortsForMXSession:(unsigned long long)a0;
- (id)copySimulatedConfigurationChangeDescriptionForMXSessionWithID:(id)a0;
- (id)copySimulatedEligibleVirtualPortsForMXSessionWithID:(id)a0;
- (void)setupDefaultAudioBehaviorForCategory:(id)a0;
- (int)setConfigurationOnAuRA:(BOOL)a0 mxSessionID:(id)a1;
- (BOOL)isModeValidForCategory:(id)a0;
- (BOOL)isPlayAndRecordCategory;
- (double *)getPreferredOutputSampleRatePointer;
- (int *)getPreferredIOBufferFramesPointer;

@end

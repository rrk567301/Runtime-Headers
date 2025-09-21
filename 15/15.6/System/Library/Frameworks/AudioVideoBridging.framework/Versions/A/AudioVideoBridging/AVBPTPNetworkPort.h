@class NSString, AVBIOKPTPNetworkPort, NSPointerArray;

@interface AVBPTPNetworkPort : AVBPTPPort {
    AVBIOKPTPNetworkPort *_implIOKit;
    NSPointerArray *_clients;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _clientLock;
}

@property (nonatomic) unsigned long long remoteClockIdentity;
@property (nonatomic) unsigned short remotePortNumber;
@property (nonatomic) char remoteIsSameDevice;
@property (nonatomic, getter=isASCapable) char asCapable;
@property (nonatomic) unsigned int propagationDelay;
@property (nonatomic) unsigned int maximumPropagationDelay;
@property (nonatomic) unsigned int minimumPropagationDelay;
@property (nonatomic) unsigned int propagationDelayLimit;
@property (nonatomic) unsigned int maximumRawDelay;
@property (nonatomic) unsigned int minimumRawDelay;
@property (nonatomic) char localSyncLogMeanInterval;
@property (nonatomic) char remoteSyncLogMeanInterval;
@property (nonatomic) char localAnnounceLogMeanInterval;
@property (nonatomic) char remoteAnnounceLogMeanInterval;
@property (nonatomic) unsigned char localLinkType;
@property (nonatomic) unsigned char remoteLinkType;
@property (nonatomic) unsigned char localTimestampingMode;
@property (nonatomic) unsigned char remoteTimestampingMode;
@property (nonatomic) unsigned char localOscillatorType;
@property (nonatomic) unsigned char remoteOscillatorType;
@property (nonatomic) char hasLocalFrequencyToleranceLower;
@property (nonatomic) int localFrequencyToleranceLower;
@property (nonatomic) char hasLocalFrequencyToleranceUpper;
@property (nonatomic) int localFrequencyToleranceUpper;
@property (nonatomic) char hasRemoteFrequencyToleranceLower;
@property (nonatomic) int remoteFrequencyToleranceLower;
@property (nonatomic) char hasRemoteFrequencyToleranceUpper;
@property (nonatomic) int remoteFrequencyToleranceUpper;
@property (nonatomic) char hasLocalFrequencyStabilityLower;
@property (nonatomic) int localFrequencyStabilityLower;
@property (nonatomic) char hasLocalFrequencyStabilityUpper;
@property (nonatomic) int localFrequencyStabilityUpper;
@property (nonatomic) char hasRemoteFrequencyStabilityLower;
@property (nonatomic) int remoteFrequencyStabilityLower;
@property (nonatomic) char hasRemoteFrequencyStabilityUpper;
@property (nonatomic) int remoteFrequencyStabilityUpper;
@property (copy, nonatomic) NSString *sourceAddressString;
@property (copy, nonatomic) NSString *destinationAddressString;
@property (nonatomic) char enabled;
@property (copy, nonatomic) NSString *interfaceName;

+ (id)diagnosticDescriptionForInfo:(id)a0 withIndent:(id)a1;

- (void).cxx_destruct;
- (void)addClient:(id)a0;
- (void)removeClient:(id)a0;
- (void)syncTimeout;
- (char)deregisterAsyncCallbackError:(id *)a0;
- (char)disablePortError:(id *)a0;
- (char)enablePortError:(id *)a0;
- (char)registerAsyncCallbackError:(id *)a0;
- (char)requestRemoteMessageIntervalsWithPDelayMessageInterval:(char)a0 syncMessageInterval:(char)a1 announceMessageInterval:(char)a2 error:(id *)a3;
- (void)serviceTerminated;
- (void)announceTimeout;
- (void)_updateFromProperties:(id)a0;
- (void)changedASCapable:(char)a0;
- (void)changedAdministrativeEnable:(char)a0;
- (id)initWithImplIOKit:(id)a0;

@end

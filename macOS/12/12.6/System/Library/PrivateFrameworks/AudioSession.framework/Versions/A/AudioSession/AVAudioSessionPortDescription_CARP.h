@interface AVAudioSessionPortDescription_CARP : AVAudioSessionPortDescription {
    struct synchronized<std::shared_ptr<as::client::VirtualPort>, caulk::shared_ptr_mutex<as::client::KVOMutex>, as::client::unguarded_accessor<std::shared_ptr<as::client::VirtualPort>>> { struct shared_ptr_mutex<as::client::KVOMutex> { struct shared_ptr<as::client::KVOMutex> { struct KVOMutex *__ptr_; struct __shared_weak_count *__cntrl_; } mMutex; } mMutex; struct shared_ptr<as::client::VirtualPort> { struct VirtualPort *__ptr_; struct __shared_weak_count *__cntrl_; } mObject; } _guarded_impl;
}

- (id)description;
- (void).cxx_destruct;
- (id)type;
- (id).cxx_construct;
- (id)portName;
- (id)portType;
- (id)channels;
- (id)dataSources;
- (id)selectedDataSource;
- (id)preferredDataSource;
- (unsigned long long)endpointType;
- (id)initWithImpl:(struct shared_ptr<as::client::VirtualPort> { struct VirtualPort *x0; struct __shared_weak_count *x1; })a0;
- (id)UID;
- (id)channelDescriptions;
- (id)owningDevice;
- (id)hardwarePort;
- (BOOL)setPreferredDataSource:(id)a0 error:(id *)a1;
- (BOOL)setDriftCorrectionDescription:(id)a0 error:(id *)a1;
- (BOOL)hasHardwareVoiceCallProcessing;
- (BOOL)isSpatialAudioEnabled;
- (id)driftCompensationDescription;
- (unsigned long long)extraLatency;
- (void)setExtraLatency:(unsigned long long)a0;
- (BOOL)isHeadphones;
- (BOOL)isLiveListenSupported;
- (BOOL)isEqualToPort:(id)a0 compareStrict:(BOOL)a1;
- (BOOL)isLowLatencyAirPlay;

@end

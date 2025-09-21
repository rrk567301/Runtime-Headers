@interface AVAudioSessionPortDescription_CARP : AVAudioSessionPortDescription {
    struct synchronized<std::shared_ptr<as::client::VirtualPort>, caulk::shared_ptr_mutex<as::client::KVOMutex>, as::client::unguarded_accessor<std::shared_ptr<as::client::VirtualPort>>> { struct shared_ptr_mutex<as::client::KVOMutex> { struct shared_ptr<as::client::KVOMutex> { struct KVOMutex *__ptr_; struct __shared_weak_count *__cntrl_; } mMutex; } mMutex; struct shared_ptr<as::client::VirtualPort> { struct VirtualPort *__ptr_; struct __shared_weak_count *__cntrl_; } mObject; } _guarded_impl;
}

- (id)description;
- (void).cxx_destruct;
- (id)type;
- (id).cxx_construct;
- (id)portName;
- (id)UID;
- (id)initWithImpl:(struct shared_ptr<as::client::VirtualPort> { struct VirtualPort *x0; struct __shared_weak_count *x1; })a0;
- (id)channels;
- (id)dataSources;
- (id)portType;
- (id)preferredDataSource;
- (id)selectedDataSource;
- (unsigned long long)endpointType;
- (id)channelDescriptions;
- (id)driftCompensationDescription;
- (unsigned long long)extraLatency;
- (id)hardwarePort;
- (char)hasHardwareVoiceCallProcessing;
- (char)isEqualToPort:(id)a0 compareStrict:(char)a1;
- (char)isHeadphones;
- (char)isLiveListenSupported;
- (char)isLowLatencyAirPlay;
- (char)isSpatialAudioEnabled;
- (id)owningDevice;
- (long long)portSubType;
- (char)setDriftCorrectionDescription:(id)a0 error:(id *)a1;
- (void)setExtraLatency:(unsigned long long)a0;
- (char)setPreferredDataSource:(id)a0 error:(id *)a1;

@end

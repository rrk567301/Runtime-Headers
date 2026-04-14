@protocol DSPProcessorPropertySet;

@interface MicActivityServiceDelegate : NSObject <MicActivityClientProtocol, SelfConfiguringClient, DSPPropertySupervisor> {
    struct MicActivityContext { void /* function */ **_vptr$DSPProcessorPropertyHandler; id<DSPProcessorPropertySet> mPropertySet; struct unique_ptr<MicActivityClientConnections, std::default_delete<MicActivityClientConnections>> { struct { struct MicActivityClientConnections *__ptr_; } ; } mClientConnections; } mMicActivityContext;
    struct SelfConfigureGateway { id /* block */ mHandler; struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } mSelfConfigureHandleSet; } mSelfConfigureGateway;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)propertyChanged:(struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; })a0;
- (void)disableMicrophoneActivityDetection:(id /* block */)a0;
- (void)enableMicrophoneActivityDetection:(id /* block */)a0;
- (void)listenForMicrophoneActivity:(id)a0 reply:(id /* block */)a1;
- (void)stopListeningForMicrophoneActivity:(id /* block */)a0;
- (void)submitReferenceStreamUID:(id)a0 withReply:(id /* block */)a1;
- (int)selfConfigureMAD;
- (void)setDSPProcessorPropertySet:(id)a0;
- (void)setSelfConfigureHandler:(id /* block */)a0;

@end

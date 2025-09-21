@class NSObject;
@protocol OS_dispatch_queue;

@interface MIDICIMutableDevice : MIDICIDevice {
    struct unique_ptr<MIDICI::SysexCollector, std::default_delete<MIDICI::SysexCollector>> { struct SysexCollector *__ptr_; } _sysexCollector;
    struct unique_ptr<caulk::concurrent::messenger, std::default_delete<caulk::concurrent::messenger>> { struct messenger *__ptr_; } _messenger;
    id /* block */ _profileSpecificDataCallback;
    id /* block */ _messageCallback;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;

+ (id)description;

- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)setEnabled:(BOOL)a0 error:(id *)a1;
- (BOOL)registerWithServer;
- (BOOL)handleNAK:(unsigned char)a0 view:(const struct nak_view { struct sysex7 *x0; } *)a1;
- (BOOL)addProfile:(id)a0 error:(id *)a1;
- (id)findProfile:(struct profile_id { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; })a0;
- (BOOL)handleDiscoveryInquiry:(unsigned char)a0 view:(const struct discovery_inquiry_view { struct sysex7 *x0; } *)a1;
- (BOOL)handleDiscoveryReply:(unsigned char)a0 view:(const struct discovery_reply_view { struct sysex7 *x0; } *)a1;
- (BOOL)handleEndpointInformationInquiry:(unsigned char)a0 view:(const struct endpoint_information_inquiry_view { struct sysex7 *x0; } *)a1;
- (BOOL)handleGetProperty:(unsigned char)a0 fromDevice:(id)a1 view:(const struct get_property_data_view { struct sysex7 *x0; } *)a2;
- (BOOL)handleInvalidateMUID:(unsigned char)a0 view:(const struct invalidate_muid_view { struct sysex7 *x0; } *)a1;
- (BOOL)handleProfileDetailsInquiry:(unsigned char)a0 view:(const struct profile_details_inquiry_view { struct sysex7 *x0; } *)a1;
- (BOOL)handleProfileIDView:(unsigned char)a0 view:(const struct profile_id_view { struct sysex7 *x0; } *)a1;
- (BOOL)handleProfileInquiry:(unsigned char)a0 view:(const struct profile_inquiry_view { struct sysex7 *x0; } *)a1;
- (BOOL)handleProfileSpecificData:(unsigned char)a0 fromDevice:(id)a1 view:(const struct profile_specific_data_view { struct sysex7 *x0; } *)a2;
- (BOOL)handleSysExIdentityRequest:(unsigned char)a0;
- (BOOL)handleSysex:(unsigned char)a0 sysEx:(const void *)a1;
- (id)initWithUMPEndpointPair:(id)a0 functionBlock:(id)a1 capabilities:(unsigned char)a2 sysExSizeLimit:(unsigned long long)a3 maxPERequests:(unsigned long long)a4 profileSpecificDataCallback:(id /* block */)a5 messageCallback:(id /* block */)a6;
- (id)initWithUMPEndpointPair:(id)a0 functionBlock:(id)a1 capabilities:(unsigned char)a2 sysExSizeLimit:(unsigned long long)a3 maxPERequests:(unsigned long long)a4 queue:(id)a5 profileSpecificDataCallback:(id /* block */)a6 messageCallback:(id /* block */)a7;
- (BOOL)receiveMessageViaSource:(const void *)a0 error:(id *)a1;
- (BOOL)removeProfile:(id)a0 error:(id *)a1;
- (int)respondViaSource:(const struct MIDIEventList { int x0; unsigned int x1; struct MIDIEventPacket { unsigned long long x0; unsigned int x1; unsigned int x2[64]; } x2[1]; } *)a0;
- (BOOL)sendMessageToCIDevice:(id)a0 withSubType:(unsigned char)a1 deviceID:(unsigned char)a2 data:(id)a3 error:(id *)a4;
- (BOOL)setProfile:(id)a0 newState:(BOOL)a1 enabledChannelCount:(unsigned short)a2 error:(id *)a3;
- (BOOL)setResourceList:(id)a0 error:(id *)a1;
- (void)setupMIDIStreamObjects;

@end

@class MRVirtualVoiceInputDeviceDescriptor;

@interface MRRegisterVoiceInputDeviceMessage : MRProtocolMessage {
    MRVirtualVoiceInputDeviceDescriptor *_descriptor;
}

@property (readonly, nonatomic) MRVirtualVoiceInputDeviceDescriptor *descriptor;

- (unsigned long long)type;
- (id)initWithDescriptor:(id)a0;
- (void).cxx_destruct;

@end

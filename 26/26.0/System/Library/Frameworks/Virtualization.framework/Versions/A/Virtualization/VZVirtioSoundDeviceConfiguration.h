@class NSArray;

@interface VZVirtioSoundDeviceConfiguration : VZAudioDeviceConfiguration {
    NSArray *_streams;
}

@property (copy) NSArray *streams;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (struct expected<std::variant<VzCore::VirtualMachineConfiguration::AudioDevices::Virtio>, NSError *> { struct __conditional_no_unique_address<true, std::__expected_base<std::variant<VzCore::VirtualMachineConfiguration::AudioDevices::Virtio>, NSError *>::__repr> { struct __repr { struct __conditional_no_unique_address<false, std::__expected_base<std::variant<VzCore::VirtualMachineConfiguration::AudioDevices::Virtio>, NSError *>::__union_t> { union __union_t { struct variant<VzCore::VirtualMachineConfiguration::AudioDevices::Virtio> { struct __impl<VzCore::VirtualMachineConfiguration::AudioDevices::Virtio> { union __union<std::__variant_detail::_Trait::_Available, 0UL, VzCore::VirtualMachineConfiguration::AudioDevices::Virtio> { char x0; struct __alt<0UL, VzCore::VirtualMachineConfiguration::AudioDevices::Virtio> { struct Virtio { struct vector<VzCore::VirtualMachineConfiguration::AudioDevices::Stream, std::allocator<VzCore::VirtualMachineConfiguration::AudioDevices::Stream>> { struct Stream *x0; struct Stream *x1; struct Stream *x2; } x0; struct optional<VzCore::VirtualMachineConfiguration::AudioDevices::Role> { union { char x0; int x1; } x0; BOOL x1; } x1; } x0; } x1; union __union<std::__variant_detail::_Trait::_Available, 1UL> { } x2; } x0; unsigned int x1; } x0; } x0; id x1; } x0; } x0; BOOL x1; } x0; } x0; })_audioDevice;
- (id)_makeAudioDeviceForVirtualMachine:(id)a0 audioDeviceIndex:(unsigned long long)a1;
- (struct expected<NSDictionary *, NSError *> { struct __conditional_no_unique_address<true, std::__expected_base<NSDictionary *, NSError *>::__repr> { struct __repr { struct __conditional_no_unique_address<false, std::__expected_base<NSDictionary *, NSError *>::__union_t> { union __union_t { id x0; id x1; } x0; } x0; BOOL x1; } x0; } x0; })encodeWithEncoder:(id)a0;

@end

@class VZVirtioConsolePortConfigurationArray;

@interface VZVirtioConsoleDeviceConfiguration : VZConsoleDeviceConfiguration

@property (readonly) VZVirtioConsolePortConfigurationArray *ports;

- (BOOL)validateWithError:(id *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (struct expected<VzCore::VirtualMachineConfiguration::ConsoleDevice, NSError *> { struct __conditional_no_unique_address<true, std::__expected_base<VzCore::VirtualMachineConfiguration::ConsoleDevice, NSError *>::__repr> { struct __repr { struct __conditional_no_unique_address<false, std::__expected_base<VzCore::VirtualMachineConfiguration::ConsoleDevice, NSError *>::__union_t> { union __union_t { struct ConsoleDevice { int x0; unsigned int x1; struct unordered_map<unsigned int, VzCore::VirtualMachineConfiguration::ConsoleDevice::Port, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, VzCore::VirtualMachineConfiguration::ConsoleDevice::Port>>> { struct __hash_table<std::__hash_value_type<unsigned int, VzCore::VirtualMachineConfiguration::ConsoleDevice::Port>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, VzCore::VirtualMachineConfiguration::ConsoleDevice::Port>, std::hash<unsigned int>, std::equal_to<unsigned int>>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, VzCore::VirtualMachineConfiguration::ConsoleDevice::Port>, std::equal_to<unsigned int>, std::hash<unsigned int>>, std::allocator<std::__hash_value_type<unsigned int, VzCore::VirtualMachineConfiguration::ConsoleDevice::Port>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, VzCore::VirtualMachineConfiguration::ConsoleDevice::Port>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, VzCore::VirtualMachineConfiguration::ConsoleDevice::Port>, void *> *> *>>> { void **x0; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, VzCore::VirtualMachineConfiguration::ConsoleDevice::Port>, void *> *> *>> { unsigned long long x0; } x1; } x0; struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, VzCore::VirtualMachineConfiguration::ConsoleDevice::Port>, void *> *> { void *x0; } x1; unsigned long long x2; float x3; } x0; } x2; } x0; id x1; } x0; } x0; BOOL x1; } x0; } x0; })_consoleDevice;
- (struct expected<NSDictionary *, NSError *> { struct __conditional_no_unique_address<true, std::__expected_base<NSDictionary *, NSError *>::__repr> { struct __repr { struct __conditional_no_unique_address<false, std::__expected_base<NSDictionary *, NSError *>::__union_t> { union __union_t { id x0; id x1; } x0; } x0; BOOL x1; } x0; } x0; })encodeWithEncoder:(id)a0;
- (id)makeConsoleDeviceForVirtualMachine:(id)a0 consoleDeviceIndex:(unsigned long long)a1;

@end

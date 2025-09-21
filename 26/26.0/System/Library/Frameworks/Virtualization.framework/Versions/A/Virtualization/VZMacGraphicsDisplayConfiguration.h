@interface VZMacGraphicsDisplayConfiguration : VZGraphicsDisplayConfiguration {
    long long _displayMode;
    long long _connectionType;
}

@property (setter=_setDisplayMode:) long long _displayMode;
@property (setter=_setConnectionType:) long long _connectionType;
@property long long widthInPixels;
@property long long heightInPixels;
@property long long pixelsPerInch;

- (id)_initWithConfiguration:(const void *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct variant<VzCore::VirtualMachineConfiguration::GraphicsDevices::ParavirtualizedGraphics::Display, VzCore::VirtualMachineConfiguration::GraphicsDevices::Virtio::Scanout> { struct __impl<VzCore::VirtualMachineConfiguration::GraphicsDevices::ParavirtualizedGraphics::Display, VzCore::VirtualMachineConfiguration::GraphicsDevices::Virtio::Scanout> { union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 0UL, VzCore::VirtualMachineConfiguration::GraphicsDevices::ParavirtualizedGraphics::Display, VzCore::VirtualMachineConfiguration::GraphicsDevices::Virtio::Scanout> { char x0; struct __alt<0UL, VzCore::VirtualMachineConfiguration::GraphicsDevices::ParavirtualizedGraphics::Display> { struct Display { struct Size<unsigned long long> { unsigned long long x0; unsigned long long x1; } x0; unsigned long long x1; int x2; int x3; } x0; } x1; union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 1UL, VzCore::VirtualMachineConfiguration::GraphicsDevices::Virtio::Scanout> { char x0; struct __alt<1UL, VzCore::VirtualMachineConfiguration::GraphicsDevices::Virtio::Scanout> { struct Scanout { struct Rect<unsigned int> { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } x0; } x0; } x1; union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 2UL> { } x2; } x2; } x0; unsigned int x1; } x0; })_graphicsDisplay;
- (id)initForScreen:(id)a0 sizeInPoints:(struct CGSize { double x0; double x1; })a1;
- (id)initWithWidthInPixels:(long long)a0 heightInPixels:(long long)a1 pixelsPerInch:(long long)a2;

@end

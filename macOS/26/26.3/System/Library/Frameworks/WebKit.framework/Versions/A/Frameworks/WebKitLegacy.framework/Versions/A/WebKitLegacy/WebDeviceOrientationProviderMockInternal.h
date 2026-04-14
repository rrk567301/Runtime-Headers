@interface WebDeviceOrientationProviderMockInternal : NSObject {
    struct unique_ptr<WebCore::DeviceOrientationClientMock, std::default_delete<WebCore::DeviceOrientationClientMock>> { struct { struct DeviceOrientationClientMock *__ptr_; } ; } m_core;
}

- (id)lastOrientation;
- (void)setController:(struct DeviceOrientationController { } *)a0;
- (id)init;
- (void)setOrientation:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)startUpdating;
- (void)stopUpdating;

@end

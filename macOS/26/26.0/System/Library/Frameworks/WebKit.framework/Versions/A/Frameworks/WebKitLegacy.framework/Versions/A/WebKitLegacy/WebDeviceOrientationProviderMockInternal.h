@interface WebDeviceOrientationProviderMockInternal : NSObject {
    struct unique_ptr<WebCore::DeviceOrientationClientMock, std::default_delete<WebCore::DeviceOrientationClientMock>> { struct DeviceOrientationClientMock *__ptr_; } m_core;
}

- (id)lastOrientation;
- (void)setController:(struct DeviceOrientationController { } *)a0;
- (void)setOrientation:(id)a0;
- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)startUpdating;
- (void)stopUpdating;

@end

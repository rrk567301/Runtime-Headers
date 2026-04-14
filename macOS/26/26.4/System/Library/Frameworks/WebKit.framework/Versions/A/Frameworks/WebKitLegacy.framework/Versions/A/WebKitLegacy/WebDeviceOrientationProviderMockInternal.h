@interface WebDeviceOrientationProviderMockInternal : NSObject {
    struct unique_ptr<WebCore::DeviceOrientationClientMock, std::default_delete<WebCore::DeviceOrientationClientMock>> { struct { struct DeviceOrientationClientMock *__ptr_; } ; } m_core;
}

- (void)setController:(struct DeviceOrientationController { } *)a0;
- (id)lastOrientation;
- (void)setOrientation:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (void)startUpdating;
- (void)stopUpdating;

@end

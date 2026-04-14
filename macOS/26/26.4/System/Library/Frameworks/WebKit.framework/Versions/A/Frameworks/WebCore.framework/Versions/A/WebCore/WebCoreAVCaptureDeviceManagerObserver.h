@interface WebCoreAVCaptureDeviceManagerObserver : NSObject {
    void *m_callback;
}

- (void)disconnect;
- (id)initWithCallback:(void *)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)deviceConnectedDidChange:(id)a0;

@end

@interface AXSSRemoteDesktopServer : NSObject {
    void /* unknown type, empty encoding */ _macImpl;
}

- (void)start;
- (void)dealloc;
- (void)stop;
- (id)init;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (int)handleEnableAccessibilityFeature:(unsigned long long)a0 enabled:(BOOL)a1 settings:(id)a2;
- (int)handleViewerAccessibilityMessageWithFeature:(unsigned long long)a0 message:(unsigned long long)a1 messageID:(unsigned int)a2 timeout:(double)a3 userInfo:(id)a4;
- (void)setControlEnabled:(BOOL)a0;

@end

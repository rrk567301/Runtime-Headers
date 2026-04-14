@interface AXSSRemoteDesktopServer : NSObject {
    void /* unknown type, empty encoding */ _macImpl;
}

- (void)start;
- (id)initWithDelegate:(id)a0;
- (void)dealloc;
- (void)stop;
- (void).cxx_destruct;
- (id)init;
- (int)handleEnableAccessibilityFeature:(unsigned long long)a0 enabled:(BOOL)a1 settings:(id)a2;
- (int)handleViewerAccessibilityMessageWithFeature:(unsigned long long)a0 message:(unsigned long long)a1 messageID:(unsigned int)a2 timeout:(double)a3 userInfo:(id)a4;
- (void)setControlEnabled:(BOOL)a0;

@end

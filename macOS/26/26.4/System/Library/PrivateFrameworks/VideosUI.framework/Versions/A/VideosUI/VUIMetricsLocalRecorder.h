@interface VUIMetricsLocalRecorder : NSObject {
    void /* unknown type, empty encoding */ storageManager;
    void /* unknown type, empty encoding */ currentSession;
}

- (id)initWithStorageManager:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)recordPagePerfRenderEventWithVuiDictionary:(id)a0;

@end

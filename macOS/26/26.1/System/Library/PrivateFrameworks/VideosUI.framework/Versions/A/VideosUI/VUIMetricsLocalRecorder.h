@interface VUIMetricsLocalRecorder : NSObject {
    void /* unknown type, empty encoding */ storageManager;
    void /* unknown type, empty encoding */ currentSession;
}

- (void).cxx_destruct;
- (id)initWithStorageManager:(id)a0;
- (id)init;
- (void)recordPagePerfRenderEventWithVuiDictionary:(id)a0;

@end

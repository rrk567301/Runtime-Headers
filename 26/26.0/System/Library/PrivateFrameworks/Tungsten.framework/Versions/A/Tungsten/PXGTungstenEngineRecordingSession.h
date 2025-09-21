@class PXGEngine;

@interface PXGTungstenEngineRecordingSession : PXGTungstenRecordingSession {
    PXGEngine *_engine;
}

- (void)stop;
- (void).cxx_destruct;
- (id)initWithEngine:(id)a0 directoryURL:(id)a1;

@end

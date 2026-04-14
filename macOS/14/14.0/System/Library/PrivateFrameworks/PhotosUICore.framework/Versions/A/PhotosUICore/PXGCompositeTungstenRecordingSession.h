@class NSArray;

@interface PXGCompositeTungstenRecordingSession : NSObject <PXGTungstenRecordingSession> {
    NSArray *_recordingSessions;
    NSArray *_recordingURLs;
}

@property (readonly, nonatomic) NSArray *recordingURLs;
@property (readonly, nonatomic) BOOL isStopped;

- (void).cxx_destruct;
- (void)stop;
- (id)initWithRecordingSessions:(id)a0;

@end

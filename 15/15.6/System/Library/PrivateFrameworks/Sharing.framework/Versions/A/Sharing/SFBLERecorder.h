@class NSMutableArray;
@protocol SFBLERecorderReplayDelegate;

@interface SFBLERecorder : NSObject {
    NSMutableArray *_recordings;
    unsigned long long _replayIndex;
}

@property (readonly, nonatomic) long long payloadType;
@property (weak, nonatomic) id<SFBLERecorderReplayDelegate> replayDelegate;

- (void).cxx_destruct;
- (id)initWithPayloadType:(long long)a0;
- (id)initWithRecordingURL:(id)a0;
- (char)recordDevice:(id)a0 data:(id)a1 rssi:(id)a2 info:(id)a3 error:(id *)a4;
- (char)replayNextRecording;
- (char)saveToDirectory:(id)a0;

@end

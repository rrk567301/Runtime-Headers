@class PXGMetalRecordingFrameEndEventSerializable;

@interface PXGMetalRecordingFrameEndEvent : PXGTungstenRecordingEvent {
    PXGMetalRecordingFrameEndEventSerializable *_serializable;
}

+ (id)event;

- (void).cxx_destruct;
- (id)init;
- (id)serializable;

@end

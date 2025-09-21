@class PXGEngineRecordingUpdateEndEventSerializable;

@interface PXGEngineRecordingUpdateEndEvent : PXGTungstenRecordingEvent {
    PXGEngineRecordingUpdateEndEventSerializable *_serializable;
}

+ (id)eventWithUpdated:(char)a0;

- (void).cxx_destruct;
- (id)initWithUpdated:(char)a0;
- (id)serializable;

@end

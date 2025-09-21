@class PXGEngineDeferRenderEventSerializable;

@interface PXGEngineDeferRenderEvent : PXGTungstenRecordingEvent {
    PXGEngineDeferRenderEventSerializable *_serializable;
}

+ (id)eventWithShouldDeferRenderUntilNextFrame:(char)a0 delegateAllowsRender:(char)a1;

- (void).cxx_destruct;
- (id)initWithShouldDeferRenderUntilNextFrame:(char)a0 delegateAllowsRender:(char)a1;
- (id)serializable;

@end

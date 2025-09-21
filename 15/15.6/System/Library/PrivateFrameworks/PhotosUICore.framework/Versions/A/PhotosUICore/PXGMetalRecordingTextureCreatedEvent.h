@class PXGMetalRecordingMetalSpriteTexture;

@interface PXGMetalRecordingTextureCreatedEvent : PXGTungstenRecordingEvent {
    PXGMetalRecordingMetalSpriteTexture *_recordingTexture;
    struct { unsigned int effectID; char wantsMipmaps; } _options;
}

+ (id)eventWithTexture:(id)a0 options:(struct { unsigned int x0; char x1; })a1 recordingComponent:(long long)a2;

- (void).cxx_destruct;
- (id)initWithTexture:(id)a0 options:(struct { unsigned int x0; char x1; })a1 recordingComponent:(long long)a2;
- (id)serializable;

@end

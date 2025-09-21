@class PXGColorProgram, PXGShader, PXGMetalRecordingMetalSpriteTexture;
@protocol PXGMetalSpriteTexture, MTLRenderPipelineState;

@interface PXGMetalRenderEvent : PXGTungstenRecordingEvent {
    struct { int shaderFlags; unsigned long long colorPixelFormat; PXGColorProgram *colorProgram; PXGShader *shader; id<MTLRenderPipelineState> renderPipelineState; char isOpaque; } _pipeline;
    struct { id<PXGMetalSpriteTexture> texture; PXGShader *shader; struct _NSRange { unsigned long long location; unsigned long long length; } bufferRange; float zPosition; int shaderFlags; unsigned char contentsGravity; void /* unknown type, empty encoding */ minXY; void /* unknown type, empty encoding */ maxXY; char isOpaque; char isCapture; char isClaimed; } _renderTexture;
    PXGMetalRecordingMetalSpriteTexture *_recordingTexture;
}

+ (id)eventWithRenderTexture:(struct { id x0; id x1; struct _NSRange { unsigned long long x0; unsigned long long x1; } x2; float x3; int x4; unsigned char x5; char x6; char x7; char x8; } *)a0 pipeline:(struct { int x0; unsigned long long x1; id x2; id x3; id x4; char x5; })a1;

- (void).cxx_destruct;
- (id)initWithRenderTexture:(struct { id x0; id x1; struct _NSRange { unsigned long long x0; unsigned long long x1; } x2; float x3; int x4; unsigned char x5; char x6; char x7; char x8; } *)a0 pipeline:(struct { int x0; unsigned long long x1; id x2; id x3; id x4; char x5; })a1;
- (id)serializable;

@end

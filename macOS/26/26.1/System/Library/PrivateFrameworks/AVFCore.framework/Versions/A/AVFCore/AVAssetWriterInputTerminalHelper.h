@class NSString;

@interface AVAssetWriterInputTerminalHelper : AVAssetWriterInputHelper <AVAssetWriterInputMediaDataRequesterDelegate> {
    long long _terminalStatus;
    BOOL _didRequestMediaDataOnce;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)markCurrentPassAsFinished;
- (void)stopRequestingMediaData;
- (BOOL)isReadyForMoreMediaData;
- (void)requestMediaDataWhenReadyOnQueue:(id)a0 usingBlock:(id /* block */)a1;
- (id)initWithConfigurationState:(id)a0;
- (void)markAsFinished;
- (long long)appendCaptionGroup:(id)a0 error:(id *)a1;
- (BOOL)mediaDataRequesterShouldRequestMediaData;
- (id)transitionToAndReturnTerminalHelperWithTerminalStatus:(long long)a0;
- (BOOL)canStartRespondingToEachPassDescriptionReturningReason:(id *)a0;
- (long long)appendCaption:(id)a0 error:(id *)a1;
- (void)requestMediaDataOnceIfNecessaryWithMediaDataRequester:(id)a0;
- (BOOL)appendPixelBuffer:(struct __CVBuffer { } *)a0 withPresentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (long long)appendSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 error:(id *)a1;
- (BOOL)appendTaggedPixelBufferGroup:(struct OpaqueCMTaggedBufferGroup { } *)a0 withPresentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (long long)status;
- (id)initWithConfigurationState:(id)a0 terminalStatus:(long long)a1;

@end

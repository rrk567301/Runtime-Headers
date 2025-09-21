@class NSString;

@interface AVAssetWriterInputTerminalHelper : AVAssetWriterInputHelper <AVAssetWriterInputMediaDataRequesterDelegate> {
    long long _terminalStatus;
    char _didRequestMediaDataOnce;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)status;
- (long long)appendCaption:(id)a0 error:(id *)a1;
- (long long)appendCaptionGroup:(id)a0 error:(id *)a1;
- (char)appendPixelBuffer:(struct __CVBuffer { } *)a0 withPresentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (long long)appendSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 error:(id *)a1;
- (char)appendTaggedPixelBufferGroup:(struct OpaqueCMTaggedBufferGroup { } *)a0 withPresentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (char)canStartRespondingToEachPassDescriptionReturningReason:(id *)a0;
- (id)initWithConfigurationState:(id)a0;
- (id)initWithConfigurationState:(id)a0 terminalStatus:(long long)a1;
- (char)isReadyForMoreMediaData;
- (void)markAsFinished;
- (void)markCurrentPassAsFinished;
- (char)mediaDataRequesterShouldRequestMediaData;
- (void)requestMediaDataOnceIfNecessaryWithMediaDataRequester:(id)a0;
- (void)requestMediaDataWhenReadyOnQueue:(id)a0 usingBlock:(id /* block */)a1;
- (void)stopRequestingMediaData;
- (id)transitionToAndReturnTerminalHelperWithTerminalStatus:(long long)a0;

@end

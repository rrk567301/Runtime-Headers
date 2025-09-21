@class NSMutableArray;

@interface AVFigAssetWriterAudioTrack : AVFigAssetWriterTrack {
    NSMutableArray *_pendingAudioSampleBuffers;
}

- (void)dealloc;
- (int)_attachToFigAssetWriterUsingFormatSpecification:(id)a0 sourcePixelBufferAttributes:(id)a1 multiPass:(char)a2 error:(id *)a3;
- (char)_flushPendingSampleBuffersReturningError:(id *)a0;
- (char)addSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 error:(id *)a1;
- (id)initWithFigAssetWriter:(struct OpaqueFigAssetWriter { } *)a0 mediaType:(id)a1 mediaFileType:(id)a2 formatSpecification:(id)a3 sourcePixelBufferAttributes:(id)a4 multiPass:(char)a5 error:(id *)a6;
- (char)markEndOfDataReturningError:(id *)a0;
- (void)prepareToEndSession;

@end

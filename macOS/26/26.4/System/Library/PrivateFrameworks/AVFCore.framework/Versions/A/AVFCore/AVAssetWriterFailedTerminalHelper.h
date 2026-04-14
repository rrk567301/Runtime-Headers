@class NSError;

@interface AVAssetWriterFailedTerminalHelper : AVAssetWriterTerminalHelper {
    NSError *_terminalError;
}

- (void)flushSegment;
- (long long)status;
- (id)error;
- (void)flush;
- (id)initWithConfigurationState:(id)a0;
- (void)endSessionAtSourceTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)finishWritingWithCompletionHandler:(id /* block */)a0;
- (void)finishWriting;
- (void)startSessionAtSourceTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)dealloc;
- (id)initWithConfigurationState:(id)a0 terminalError:(id)a1;
- (void)setFinishWritingDelegate:(id)a0;

@end

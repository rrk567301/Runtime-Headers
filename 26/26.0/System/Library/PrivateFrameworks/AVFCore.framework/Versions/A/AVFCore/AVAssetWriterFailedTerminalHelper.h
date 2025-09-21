@class NSError;

@interface AVAssetWriterFailedTerminalHelper : AVAssetWriterTerminalHelper {
    NSError *_terminalError;
}

- (id)initWithConfigurationState:(id)a0;
- (void)flushSegment;
- (void)dealloc;
- (void)endSessionAtSourceTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)startSessionAtSourceTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)finishWritingWithCompletionHandler:(id /* block */)a0;
- (void)flush;
- (long long)status;
- (id)error;
- (void)finishWriting;
- (id)initWithConfigurationState:(id)a0 terminalError:(id)a1;
- (void)setFinishWritingDelegate:(id)a0;

@end

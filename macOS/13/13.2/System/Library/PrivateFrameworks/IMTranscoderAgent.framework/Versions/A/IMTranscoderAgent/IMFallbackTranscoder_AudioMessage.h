@interface IMFallbackTranscoder_AudioMessage : NSObject

- (void)transcodeOpusFile:(id)a0 completionBlock:(id /* block */)a1;
- (id)_tmpOutputFileURL;
- (void)_failWithOSStatusErrorCode:(int)a0 description:(id)a1 completion:(id /* block */)a2;

@end

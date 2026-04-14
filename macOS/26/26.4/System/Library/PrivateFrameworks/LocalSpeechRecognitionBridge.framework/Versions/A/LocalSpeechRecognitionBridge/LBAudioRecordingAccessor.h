@class CSSiriAudioMessageRequestClient, NSString;

@interface LBAudioRecordingAccessor : NSObject

@property (retain, nonatomic) CSSiriAudioMessageRequestClient *audioMessageClient;
@property (readonly, copy, nonatomic) NSString *requestId;

- (void).cxx_destruct;
- (void)dealloc;
- (void)convertAudioFromURL:(id)a0 toURL:(id)a1 format:(long long)a2 completion:(id /* block */)a3;
- (void)getAudioFileURLWithCompletion:(id /* block */)a0;
- (id)initWithRequestId:(id)a0;
- (void)writeAudioFileToURL:(id)a0 audioFormat:(long long)a1 completion:(id /* block */)a2;

@end

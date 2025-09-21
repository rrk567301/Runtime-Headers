@class NSString;

@interface _GCUIScreenRecorderService : NSObject <RPPreviewViewControllerDelegate, GCScreenRecorderService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isRecording) BOOL recording;

+ (id)sharedInstance;

- (id)init;
- (void)exportClipToURL:(id)a0 duration:(double)a1 completionHandler:(id /* block */)a2;
- (void)startClipBufferingWithCompletionHandler:(id /* block */)a0;
- (void)startRecordingWithHandler:(id /* block */)a0;
- (void)stopClipBufferingWithCompletionHandler:(id /* block */)a0;
- (void)stopRecordingWithOutputURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)stopRecordingWithPreviewIn:(id)a0 completionHandler:(id /* block */)a1;
- (void)previewControllerDidFinish:(id)a0;

@end

@class RPAppAudioHAL, NSObject;
@protocol OS_dispatch_queue;

@interface RPAppAudioCaptureManager : NSObject {
    NSObject<OS_dispatch_queue> *_audioDispatchQueue;
    id /* block */ _appAudioOutputHandler;
    RPAppAudioHAL *_appAudioHAL;
}

+ (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })audioStreamBasicDescriptionWithStereo:(BOOL)a0;

- (id)init;
- (void).cxx_destruct;
- (void)stop;
- (void)startWithProcessID:(int)a0 outputHandler:(id /* block */)a1 didStartHandler:(id /* block */)a2;
- (void)resumeWithProcessID:(int)a0;

@end

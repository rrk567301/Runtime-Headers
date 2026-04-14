@class OSAScriptController;

@interface OSARecordingController : NSObject {
    OSAScriptController *_controller;
    unsigned int _recordedScript;
}

+ (id)sharedRecordingController;

- (void)setController:(id)a0;
- (id)controller;
- (void)dealloc;
- (id)init;
- (void)handleRecordedTextAppleEvent:(id)a0 withReplyEvent:(id)a1;
- (void)startRecordingForController:(id)a0;
- (void)stopRecordingForController:(id)a0;

@end

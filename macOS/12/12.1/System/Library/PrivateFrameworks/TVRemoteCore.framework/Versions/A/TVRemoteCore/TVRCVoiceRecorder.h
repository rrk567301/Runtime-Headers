@class TVRCDevice;

@interface TVRCVoiceRecorder : NSObject {
    TVRCDevice *_device;
    BOOL _recordsAutomatically;
}

@property (nonatomic) BOOL recordsAutomatically;

- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (id)_initWithDevice:(id)a0;

@end

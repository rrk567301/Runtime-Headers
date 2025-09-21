@interface MPCPassthroughAudioDeviceObserver : NSObject {
    unsigned int _lastKnownPassthroughCapableAudioDeviceID;
}

@property (readonly, nonatomic) BOOL passthroughCapableDeviceIsActive;

- (id)init;
- (BOOL)clearLastKnownPassthroughCapableDevice;
- (unsigned int)getAudioDeviceTransportType:(unsigned int)a0;
- (BOOL)isPassthroughCapableDevice:(unsigned int)a0;
- (BOOL)isPassthroughCapableStream:(unsigned int)a0;

@end

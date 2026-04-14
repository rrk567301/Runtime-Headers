@class NSArray, NSDictionary;

@interface _TVRCMRVirtualVoiceInputDeviceWrapper : NSObject {
    void *_deviceDescriptor;
}

@property (copy, nonatomic) NSArray *supportedFormats;
@property (copy, nonatomic) NSDictionary *defaultAudioFormat;

- (void)dealloc;
- (id)init;
- (void *)deviceDescriptor;

@end

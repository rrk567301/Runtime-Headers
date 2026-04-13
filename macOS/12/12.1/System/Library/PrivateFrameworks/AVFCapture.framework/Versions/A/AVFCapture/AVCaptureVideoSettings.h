@class AVVideoOutputSettings;

@interface AVCaptureVideoSettings : AVCaptureOutputSettings

@property (readonly, nonatomic) AVVideoOutputSettings *avVideoOutputSettings;

- (void)dealloc;
- (id)outputSettingsDictionary;
- (id)pixelAspectRatioDictionary;
- (id)cleanApertureDictionary;
- (id)initWithTrustedVideoSettingsDictionary:(id)a0;
- (id)initWithVideoSettingsDictionary:(id)a0;

@end

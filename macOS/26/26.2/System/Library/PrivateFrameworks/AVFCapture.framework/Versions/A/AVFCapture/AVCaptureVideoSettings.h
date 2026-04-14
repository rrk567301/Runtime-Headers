@class AVVideoOutputSettings;

@interface AVCaptureVideoSettings : AVCaptureOutputSettings

@property (readonly, nonatomic) AVVideoOutputSettings *avVideoOutputSettings;

- (id)pixelAspectRatioDictionary;
- (id)cleanApertureDictionary;
- (void)dealloc;
- (id)outputSettingsDictionary;
- (id)initWithTrustedVideoSettingsDictionary:(id)a0;
- (id)initWithVideoSettingsDictionary:(id)a0;

@end

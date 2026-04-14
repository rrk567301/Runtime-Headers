@class AVVideoOutputSettings;

@interface AVCaptureVideoSettings : AVCaptureOutputSettings

@property (readonly, nonatomic) AVVideoOutputSettings *avVideoOutputSettings;

- (void)dealloc;
- (id)outputSettingsDictionary;
- (id)pixelAspectRatioDictionary;
- (id)cleanApertureDictionary;
- (id)initWithVideoSettingsDictionary:(id)a0;
- (id)initWithTrustedVideoSettingsDictionary:(id)a0;

@end

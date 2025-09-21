@class NSDictionary;

@interface AVCaptureOutputSettings : NSObject

@property (nonatomic) char settingsArePassthru;
@property (readonly, nonatomic) NSDictionary *outputSettingsDictionary;

- (char)isEqual:(id)a0;

@end

@interface SKDDeviceProvider : NSObject <SKDDeviceProviding>

@property (readonly, nonatomic, getter=isGenerativeMLSupported) BOOL generativeMLSupported;

@end

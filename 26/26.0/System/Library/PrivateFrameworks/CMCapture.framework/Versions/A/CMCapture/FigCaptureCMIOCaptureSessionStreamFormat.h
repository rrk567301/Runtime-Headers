@interface FigCaptureCMIOCaptureSessionStreamFormat : NSObject

@property (readonly, nonatomic) struct opaqueCMFormatDescription { } *videoFormatDescription;
@property (readonly, nonatomic) float minFrameRate;
@property (readonly, nonatomic) float maxFrameRate;
@property (readonly, nonatomic, getter=isDefaultFormat) BOOL defaultFormat;
@property (readonly, nonatomic, getter=isExperimentalStreamFormat) BOOL experimentalStreamFormat;
@property (readonly, nonatomic) BOOL supportsCenterStage;

+ (void)initialize;

- (void)dealloc;
- (id)description;
- (id)initWithFormatDictionary:(id)a0 targetDeviceType:(unsigned long long)a1 experimentalFormatsAllowed:(BOOL)a2;

@end

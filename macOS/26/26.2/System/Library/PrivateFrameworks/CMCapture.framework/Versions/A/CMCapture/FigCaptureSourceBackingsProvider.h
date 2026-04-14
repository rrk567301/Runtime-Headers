@class FigCaptureSourceCommonSettings, NSMutableArray, NSDictionary;

@interface FigCaptureSourceBackingsProvider : NSObject {
    BOOL _hasMicSource;
}

@property (readonly, nonatomic) NSMutableArray *sourceBackings;
@property (readonly, nonatomic) FigCaptureSourceCommonSettings *commonSettings;
@property (readonly, nonatomic) NSDictionary *continuityCaptureCameraCapabilities;

+ (void)initialize;
+ (id)sharedCaptureSourceBackingsProvider;

- (void)dealloc;

@end

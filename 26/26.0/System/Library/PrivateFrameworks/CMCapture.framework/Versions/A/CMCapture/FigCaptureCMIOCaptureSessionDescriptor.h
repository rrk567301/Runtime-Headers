@class NSArray, NSDictionary, NSString, NSMutableDictionary, NSMutableArray;

@interface FigCaptureCMIOCaptureSessionDescriptor : NSObject {
    NSDictionary *_plistDictionary;
    NSString *_modelID;
    NSMutableArray *_supportedDeviceTypes;
    NSMutableDictionary *_supportedStreamTypesByDeviceType;
}

@property (class, readonly) FigCaptureCMIOCaptureSessionDescriptor *sharedInstance;

@property (readonly, nonatomic) NSArray *supportedDeviceTypes;
@property (readonly, nonatomic) NSDictionary *supportedStreamTypesByDeviceType;
@property (readonly, nonatomic) NSArray *streamFormats;
@property (readonly, nonatomic) BOOL metadataCamerasSupported;

+ (void)initialize;

- (id)initWithFileName:(id)a0;
- (void).cxx_destruct;
- (void)_parsePlistDictionary;

@end

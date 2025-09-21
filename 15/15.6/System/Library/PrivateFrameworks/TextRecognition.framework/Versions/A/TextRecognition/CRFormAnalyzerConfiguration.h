@class NSURL, NSObject;
@protocol MTLDevice;

@interface CRFormAnalyzerConfiguration : NSObject

@property (nonatomic) char gatingWithOCRResults;
@property (nonatomic) char resizeInputImage;
@property (nonatomic) char tileInputImage;
@property (nonatomic) char useContourBasedDetection;
@property (nonatomic) char useModelBasedDetection;
@property (nonatomic) char useTextBasedDetection;
@property (retain, nonatomic) NSURL *customModelURL;
@property (retain, nonatomic) NSObject<MTLDevice> *metalDevice;
@property (nonatomic) unsigned long long computeDeviceType;

- (id)init;
- (void).cxx_destruct;

@end

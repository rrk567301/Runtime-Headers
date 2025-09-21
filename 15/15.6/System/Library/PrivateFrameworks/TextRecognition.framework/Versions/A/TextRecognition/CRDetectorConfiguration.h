@class NSString, NSDictionary, NSURL, NSObject;
@protocol MTLDevice;

@interface CRDetectorConfiguration : NSObject

@property (readonly) char detectTables;
@property (readonly) char skipVerticalText;
@property (readonly) char logIntermediateResults;
@property (readonly) NSURL *customModelURL;
@property (readonly) char disableScriptDetection;
@property (readonly) char disableTextTypeDetection;
@property char runFullTile;
@property char runFineScale;
@property char mergeFullTile;
@property char useScaleTraversal;
@property char extractPolygons;
@property (readonly) struct CGSize { double width; double height; } tileSize;
@property (readonly) double tileOverlap;
@property (readonly) NSString *prioritization;
@property (readonly) struct CGSize { double width; double height; } minimumInputSize;
@property (readonly) struct CGSize { double width; double height; } maximumInputSize;
@property (readonly) double inputLengthLimit;
@property (readonly) double minimumTextHeight;
@property (readonly) unsigned long long tableMinDetectableArea;
@property (readonly) NSDictionary *scriptRatioThresholds;
@property (readonly) double scoreMapScaleFactor;
@property int mergingType;
@property (readonly) NSObject<MTLDevice> *metalDevice;
@property (readonly) unsigned long long computeDeviceType;

- (void).cxx_destruct;
- (id)initV3DefaultConfig;
- (id)initWithImageReaderOptions:(id)a0 error:(id *)a1;

@end

@class NSString, NSDictionary;
@protocol MTLDevice;

@interface CRDetectorConfiguration : NSObject {
    void /* function */ customModelPath;
    void /* function */ prioritization;
    void /* function */ scriptRatioThresholds;
}

@property (nonatomic) BOOL detectTables;
@property (nonatomic) BOOL skipVerticalText;
@property (nonatomic) BOOL logIntermediateResults;
@property (nonatomic, copy) NSString *customModelPath;
@property (nonatomic) BOOL disableScriptDetection;
@property (nonatomic) BOOL disableTextTypeDetection;
@property (nonatomic) BOOL runFullTile;
@property (nonatomic) BOOL runFineScale;
@property (nonatomic) BOOL mergeFullTile;
@property (nonatomic) BOOL useScaleTraversal;
@property (nonatomic) BOOL extractPolygons;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } tileSize;
@property (nonatomic, readonly) double tileOverlap;
@property (nonatomic, copy) NSString *prioritization;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } minimumInputSize;
@property (nonatomic) struct CGSize { double x0; double x1; } maximumInputSize;
@property (nonatomic) double inputLengthLimit;
@property (nonatomic) double minimumTextHeight;
@property (nonatomic, readonly) long long tableMinDetectableArea;
@property (nonatomic, copy) NSDictionary *scriptRatioThresholds;
@property (nonatomic, readonly) double scoreMapScaleFactor;
@property (nonatomic, retain) id<MTLDevice> metalDevice;
@property (nonatomic) unsigned long long computeDeviceType;

- (id)init;
- (void).cxx_destruct;

@end

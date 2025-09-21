@class AXMBrailleEdgeDetectorOptions, NSArray, NSLocale, NSNumber, AXMTextDetectionOptions;

@interface AXMVisionAnalysisOptions : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long clientID;
@property (readonly, nonatomic) char hasDetectionsEnabled;
@property (readonly, nonatomic) char detectFaces;
@property (nonatomic) char detectFaceRectangles;
@property (nonatomic) char detectFaceNames;
@property (nonatomic) char detectFaceAttributes;
@property (nonatomic) char detectFaceExpressions;
@property (nonatomic) char detectFaceLandmarks;
@property (nonatomic) char detectFacePose;
@property (nonatomic) char detectScenes;
@property (nonatomic) char detectObjects;
@property (nonatomic) char detectNSFW;
@property (nonatomic) char detectSignificantEvents;
@property (nonatomic) char detectModelClassifications;
@property (nonatomic) char detectCaptions;
@property (nonatomic) char detectTraits;
@property (nonatomic) char detectRectangles;
@property (nonatomic) char detectHorizon;
@property (nonatomic) char detectProminentObjects;
@property (nonatomic) char detectAesthetics;
@property (nonatomic) char detectIconClass;
@property (nonatomic) char detectBrailleEdges;
@property (retain, nonatomic) AXMBrailleEdgeDetectorOptions *brailleEdgeOptions;
@property (nonatomic) char detectText;
@property (retain, nonatomic) AXMTextDetectionOptions *textDetectionOptions;
@property (nonatomic) char includeImageInResult;
@property (retain, nonatomic) NSLocale *preferredOutputLocale;
@property (retain, nonatomic) NSArray *ignoredLayerContextIDs;
@property (retain, nonatomic) NSArray *includedLayerContextIDs;
@property (retain, nonatomic) NSNumber *snapshotLayerID;
@property (retain, nonatomic) NSNumber *snapshotContextID;
@property (nonatomic) char preserveInputImageSize;

+ (id)defaultOptions;
+ (id)voiceOverOptions;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)disableAllDetectors;

@end

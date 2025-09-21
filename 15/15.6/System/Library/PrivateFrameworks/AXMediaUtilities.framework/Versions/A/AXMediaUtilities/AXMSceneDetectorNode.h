@class NSArray, VNSceneClassificationRequest;

@interface AXMSceneDetectorNode : AXMEvaluationNode

@property (class, readonly, nonatomic) NSArray *possibleSceneClassifications;

@property (retain, nonatomic, setter=_setSceneClassificationRequest:) VNSceneClassificationRequest *_sceneClassificationRequest;
@property (nonatomic) unsigned int taxonomyOptions;

+ (char)supportsSecureCoding;
+ (id)title;
+ (char)isSupported;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)_shouldIncludeSceneLabelForOCRDocumenTypeDetection:(id)a0;
- (void)evaluate:(id)a0 metrics:(id)a1;
- (char)validateVisionKitSoftLinkSymbols;

@end

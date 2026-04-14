@class VNRecognizeObjectsRequest;

@interface AXMObjectDetectorNode : AXMEvaluationNode {
    VNRecognizeObjectsRequest *_recognizeObjectsRequest;
}

+ (id)title;
+ (BOOL)supportsSecureCoding;
+ (BOOL)isSupported;
+ (id)possibleObjectClassifications;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)evaluate:(id)a0 metrics:(id)a1;
- (BOOL)validateVisionKitSoftLinkSymbols;

@end

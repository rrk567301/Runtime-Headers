@class VNRecognizeObjectsRequest;

@interface AXMObjectDetectorNode : AXMEvaluationNode {
    VNRecognizeObjectsRequest *_recognizeObjectsRequest;
}

+ (char)supportsSecureCoding;
+ (id)title;
+ (char)isSupported;
+ (id)possibleObjectClassifications;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)evaluate:(id)a0 metrics:(id)a1;
- (char)validateVisionKitSoftLinkSymbols;

@end

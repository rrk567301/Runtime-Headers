@class VN6Mb1ME89lyW3HpahkEygIG;

@interface AXMSignificantEventDetectorNode : AXMEvaluationNode {
    VN6Mb1ME89lyW3HpahkEygIG *_request;
}

+ (char)supportsSecureCoding;
+ (id)title;
+ (char)isSupported;
+ (char)addSignificantEventResultToContext:(id)a0 forIdentifier:(id)a1 confidence:(double)a2 markAsSensitiveCaptionContent:(char)a3;

- (void).cxx_destruct;
- (void)evaluate:(id)a0 metrics:(id)a1;
- (char)validateVisionKitSoftLinkSymbols;

@end

@class VNDetectHorizonRequest;

@interface AXMHorizonDetectorNode : AXMEvaluationNode

@property (retain, nonatomic, setter=_setDetectHorizonRequest:) VNDetectHorizonRequest *_detectHorizonRequest;

+ (char)supportsSecureCoding;
+ (id)title;
+ (char)isSupported;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)evaluate:(id)a0 metrics:(id)a1;
- (void)nodeInitialize;
- (char)requiresVisionFramework;
- (char)validateVisionKitSoftLinkSymbols;

@end

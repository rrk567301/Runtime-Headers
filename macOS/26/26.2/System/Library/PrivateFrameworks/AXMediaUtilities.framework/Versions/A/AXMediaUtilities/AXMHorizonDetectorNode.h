@class VNDetectHorizonRequest;

@interface AXMHorizonDetectorNode : AXMEvaluationNode

@property (retain, nonatomic, setter=_setDetectHorizonRequest:) VNDetectHorizonRequest *_detectHorizonRequest;

+ (id)title;
+ (BOOL)supportsSecureCoding;
+ (BOOL)isSupported;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)evaluate:(id)a0 metrics:(id)a1;
- (void)nodeInitialize;
- (BOOL)requiresVisionFramework;
- (BOOL)validateVisionKitSoftLinkSymbols;

@end
